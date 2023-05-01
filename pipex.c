/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:10:40 by kilchenk          #+#    #+#             */
/*   Updated: 2023/05/01 18:43:16 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	init(t_vars *vars, int argc, char **argv, char **env)
{
	vars->argc = argc;
	vars->argv = argv;
	vars->env = env;
	vars->index = 1;
	vars->pipetmp = 1;
	vars->infile = open(argv[1], O_RDONLY);
	vars->outfile = open(argv[argc - 1], O_CREAT | O_TRUNC | O_WRONLY, 644);
	if (vars->infile < 0)
	{
		perror("Inputfile error");
		pipe(vars->pipe);
		close(vars->pipe[W]);
		vars->infile = vars->pipe[R];
	}
	if (vars->outfile < 0)
	{
		perror("Output file error");
		exit(-1);
	}
}

void	child_procces(t_vars *vars)
{
	if (vars->index == vars->argc - 2)
		dup2(vars->outfile, STDOUT_FILENO);
	else
		dup2(vars->pipe[W], STDOUT_FILENO);
	close(vars->pipe[R]);
	execve(vars->full_path, vars->cmd, vars->env);
	perror("execve error");
	exit(-1);
}

void	search_lit_path(char *big_path, t_vars *vars)
{
	char	**small_path;
	char	*lit_path;
	int		i;

	i = 0;
	small_path = ft_split(big_path, ':');
	vars->cmd = ft_split(vars->argv[vars->index], ' ');
	vars->full_path = NULL;
	while (small_path[i])
	{
		lit_path = ft_three_strjoin(small_path[i++], "/", vars->cmd[0]);
		if (access(lit_path, X_OK) == 0)
			vars->full_path = lit_path;
		else
		{
			access(lit_path, F_OK);
			free(lit_path);
		}
	}
	if (access(vars->cmd[0], X_OK) == 0)
		vars->full_path = ft_strdup(vars->cmd[0]);
	else
		access(vars->cmd[0], F_OK);
	ft_free_array(small_path);
}

void	pipex(t_vars *vars)
{
	while (vars->index++ <= vars->argc - 3)
	{
		pipe(vars->pipe);
		search_lit_path(vars->big_path, vars);
		if (vars->full_path == NULL)
		{
			perror(vars->argv[vars->index]);
			vars->pipetmp = vars->pipe[R];
			close(vars->pipe[W]);
			continue ;
		}
		vars->pid = fork();
		if (vars->pid == 0)
			child_procces(vars);
		else
		{
			waitpid(-1, NULL, WNOHANG);
			if (vars->pipetmp != 1)
				close(vars->pipetmp);
			vars->pipetmp = vars->pipe[R];
			close(vars->pipe[W]);
			ft_free_array(vars->cmd);
			free(vars->full_path);
		}
	}
}

int	main(int argc, char **argv, char **env)
{
	t_vars	vars;

	if (argc < 5)
	{
		write(2, "Error: wrong number of arguments", 33);
		return (0);
	}
	init(&vars, argc, argv, env);
	while (*env)
	{
		if (ft_strncmp("PATH=", *env, 5))
			env++;
		if (*env == 0)
			return (0);
		return (**env + 5);
	}
	pipex(&vars);
	close(vars.infile);
	close(vars.outfile);
	close(vars.pipetmp);
	return (0);
}
