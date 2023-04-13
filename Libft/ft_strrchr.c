/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:11:39 by kilchenk          #+#    #+#             */
/*   Updated: 2022/11/10 15:12:39 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char )c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}

// int    main(void)
// {
//     char dst[15] = "";
//     char dst2[15] = "";
//     int c = 'l';
//     printf("mine : %s\n", ft_strrchr(dst, c));
//     printf("%s\n", dst);
//     printf("string.h : %s\n", strrchr(dst2, c));
//     printf("%s\n", dst2);
//     return(0);
// }
