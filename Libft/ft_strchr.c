/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:47:15 by kilchenk          #+#    #+#             */
/*   Updated: 2023/03/20 20:50:31 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}

// int    main(void)
// {
//     char dst[15] = ("teste");
//     char dst2[15] = ("teste");
//     int c = ('e');
//     printf("mine : %s\n", ft_strchr(dst, c));
//     printf("%s\n", dst);
//     printf("string.h : %s\n", strchr(dst2, c));
//     printf("%s\n", dst2);
//     return (0);
// }