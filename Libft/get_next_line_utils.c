/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:56:46 by akashets          #+#    #+#             */
/*   Updated: 2023/03/20 20:51:17 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

size_t	ft_sl_gnl(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin_gnl(char *rest, char *buf)
{
	size_t	i;
	size_t	k;
	char	*new;

	if (rest == NULL)
	{
		rest = malloc(sizeof(char) * 1);
		rest[0] = '\0';
	}
	if (rest == NULL || buf == NULL)
		return (NULL);
	new = malloc(sizeof(char) * ((ft_sl_gnl(rest) + ft_sl_gnl(buf)) + 1));
	if (new == NULL)
		return (NULL);
	i = -1;
	while (rest[++i] != '\0')
		new[i] = rest[i];
	k = 0;
	while (buf[k] != '\0')
		new[i++] = buf[k++];
	new[i] = '\0';
	free(rest);
	return (new);
}

char	*ft_strchr_gnl(char *str, int c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0' && str[i] != (char) c)
		i++;
	if (str[i] == (char) c)
		return ((char *)str + i);
	return ((char *) NULL);
}

char	*ft_line(char *rest)
{
	int		i;
	char	*new;

	i = 0;
	if (rest[i] == '\0')
		return (NULL);
	while (rest[i] != '\n' && rest[i] != '\0')
		i++;
	if (rest[i] == '\n')
		new = (char *)malloc(sizeof(char) * (i + 2));
	else
		new = (char *)malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (rest[i] != '\n' && rest[i] != '\0')
	{
		new[i] = rest[i];
		i++;
	}
	if (rest[i] == '\n')
		new[i++] = '\n';
	new[i] = '\0';
	return (new);
}

char	*ft_rest(char *rest)
{
	char	*new;
	int		i;
	int		k;

	i = 0;
	while (rest[i] != '\n' && rest[i] != '\0')
		i++;
	if (!rest[i] || !rest[i + 1])
	{
		free(rest);
		return (NULL);
	}
	new = (char *)malloc(sizeof(char) * (ft_sl_gnl(rest) - i + 1));
	if (new == NULL)
	{
		free(rest);
		return (NULL);
	}
	i++;
	k = 0;
	while (rest[i] != '\0')
		new[k++] = rest[i++];
	new[k] = '\0';
	free(rest);
	return (new);
}
