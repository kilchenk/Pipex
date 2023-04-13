/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:12:34 by kilchenk          #+#    #+#             */
/*   Updated: 2023/03/20 20:51:00 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && !(!s1[i] && !s2[i]))
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}

// int    main(void)
// {
//     char dst[15] = "Hallo";
//     char dst2[15] = "Hzllo";
//     int size = 3;
//     printf("mine : %d\n", ft_strncmp(dst, dst2, size));
//     printf("%s\n", dst);
//     printf("string.h : %d\n", strncmp(dst, dst2, size));
//     printf("%s\n", dst2);
//     return (0);
// }
