/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:10:40 by kilchenk          #+#    #+#             */
/*   Updated: 2023/04/13 19:17:36 by kilchenk         ###   ########.fr       */
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

void	pipex(t_vars *vars)
{
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
			*env++;
		if (*env == 0)
			return (NULL);
		return (*env + 5);
	}
	pipex(&vars);
}
