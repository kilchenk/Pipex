/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:38:32 by akashets          #+#    #+#             */
/*   Updated: 2023/03/20 20:53:53 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_readrest(int fd, char *rest);
char	*ft_rest(char *rest);
char	*ft_line(char *rest);
char	*ft_strchr_gnl(char *str, int i);
char	*ft_strjoin_gnl(char *rest, char *buf);
size_t	ft_sl_gnl(char *s);
char	*ft_free(char *str);

#endif
