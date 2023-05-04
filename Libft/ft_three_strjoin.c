/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_strjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:56:13 by kilchenk          #+#    #+#             */
/*   Updated: 2023/05/01 19:00:49 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_three_strjoin(char *first, char *second, char *third)
{
	char	*tmp;
	char	*i;

	tmp = ft_strjoin(first, second);
	i = ft_strjoin(tmp, third);
	free(tmp);
	return (i);
}
