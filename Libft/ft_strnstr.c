/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:11:34 by kilchenk          #+#    #+#             */
/*   Updated: 2022/11/10 15:12:34 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	o;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && i < len)
	{
		o = 0;
		while (*(haystack + o + i) == *(needle + o) && i + o < len)
		{
			if (*(needle + o + 1) == 0)
				return ((char *)(haystack + i));
			o++;
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	   const char *largestring = "Foo Bar Baz";
// 	   const char *smallstring = "Bar";
// 	   char	*ptr;
// 	   char	*ptr2;

// 	   ptr = ft_strnstr(largestring, smallstring, 7);
// 	   printf("mine : %s\n", (ptr));
// 	   ptr2 = strnstr(largestring, smallstring, 7);
// 	   printf ("original : %s\n", (ptr2));
// }
