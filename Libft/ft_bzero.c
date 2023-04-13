/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:48:42 by kilchenk          #+#    #+#             */
/*   Updated: 2023/03/20 20:49:06 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//erases the data in the n bytes of the memory
//starting at the location pointed to by s, by writing zeros
void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		*((unsigned char *)s + i) = 0;
		i++;
	}
}
