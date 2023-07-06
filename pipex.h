/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:46:32 by kilchenk          #+#    #+#             */
/*   Updated: 2023/07/03 17:13:38 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "Libft/libft.h"
# include <fcntl.h>
# include "Libft/get_next_line.h"

# define R 0
# define W 1

typedef struct s_vars
{
	char	**argv;
	char	**env;
	char	**cmd;
	char	*full_path;
	char	*big_path;
	int		argc;
	int		pipe[2];
	int		infile;
	int		outfile;
	int		index;
	int		pid;
	int		pipetmp;
	int		here_doc;
}	t_vars;

void	errors(t_vars *vars);
int		heredoc(t_vars *vars);

#endif