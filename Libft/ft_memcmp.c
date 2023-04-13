/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:32:14 by kilchenk          #+#    #+#             */
/*   Updated: 2023/03/20 20:50:22 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
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
//     printf("mine : %d\n", ft_memcmp(dst, dst2, size));
//     printf("%s\n", dst);
//     printf("string.h : %d\n", memcmp(dst, dst2, size));
//     printf("%s\n", dst2);
//     return (0);
// }
