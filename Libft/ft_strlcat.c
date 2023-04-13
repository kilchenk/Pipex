/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:26:41 by kilchenk          #+#    #+#             */
/*   Updated: 2022/11/08 16:27:41 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		return (s + size);
	while (src[i] && (d + i) < (size - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}

// int    main(void)
// {
//     char dst[15] = "Hello";
//     char dst2[15] = "Hello";

//     const char src[11] = "teststring";
//     int size = 15;
//     printf("mine : %zu\n", ft_strlcat(dst, src, size));
//     printf("%s\n", dst);
//     printf("string.h : %zu\n", strlcat(dst2, src, size));
//     printf ("%s\n", dst2);

//     return (0);
// }
