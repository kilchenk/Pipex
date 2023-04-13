/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:11:31 by kilchenk          #+#    #+#             */
/*   Updated: 2022/11/10 15:12:31 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calculates the length of the string pointed to by s, 
// excluding the terminating null byte ('\0').s
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char s[] = "wqe";
// 	int i;

// 	i = ft_strlen(s);
// 	printf("%d", i);
// }
