/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:59:42 by kilchenk          #+#    #+#             */
/*   Updated: 2023/07/04 14:34:49 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	errors(t_vars *vars)
{
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

int	heredoc(t_vars *vars)
{
	char	*strings;
	int		pips[2];

	pipe(pips);
	while (1)
	{
		strings = get_next_line(STDIN_FILENO);
		if ((ft_strncmp(strings, vars->argv[2], ft_strlen(vars->argv[2])) == 0)
			&& (strings[ft_strlen(vars->argv[2])]) == '\n')
			break ;
		else
			write(pips[W], strings, ft_strlen(strings));
		free(strings);
	}
	free(strings);
	close(pips[W]);
	return (pips[R]);
}
