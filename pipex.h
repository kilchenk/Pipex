/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:46:32 by kilchenk          #+#    #+#             */
/*   Updated: 2023/04/13 19:12:35 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <Libft/libft.h>
# include <fcntl.h>

# define R 0
# define W 1

typedef struct s_vars
{
	char	**argv;
	char	**env;
	char	**cmd;
	char	*full_path;
	int		argc;
	int		pipe[2];
	int		infile;
	int		outfile;
	int		index;
	int		pid;
	int		pipetmp;
	int		here_doc;
}	t_vars;


#endif