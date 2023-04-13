/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:43:55 by kilchenk          #+#    #+#             */
/*   Updated: 2023/03/20 20:50:21 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((char *)s)[i]) == (char) c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int    main(void)
// {
//     const char str[] = "ABCD EFG";
//     const int chars[] = {' ', 'd'};
//     for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
//     {
//         const int c = chars[i];   
//         const char *ps = ft_memchr(str, c, ft_strlen(str));
//         ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
//            : printf ("character '%c'(%i) not found\n", c, c);
//     }
//     return 0;
// }
