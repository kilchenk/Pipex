/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:11:20 by kilchenk          #+#    #+#             */
/*   Updated: 2022/11/10 15:12:20 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;	

	i = 0;
	if (size < 1)
	{
		return (ft_strlen(src));
	}
	while (*src && i + 1 < size)
	{
		*dst = *src;
		dst++;
		src++;
		++i;
	}
	*dst = 0;
	while (*src++)
		i++;
	return (i);
}

// int    main(void)
// {
//     char dst[15] = "HelloWorld!";
//     char dst2[15] = "HelloWorld!";
//     const char src[11] = "teststring";
//     int size = -2;
//     printf("mine : %zu\n", ft_strlcpy(dst, src, size));
//     printf("%s\n", dst);
//     printf("string.h : %zu\n", strlcpy(dst2, src, size));
//     printf ("%s\n", dst2);
//     return (0);
// }
