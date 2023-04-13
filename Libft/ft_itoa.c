/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:45:53 by kilchenk          #+#    #+#             */
/*   Updated: 2023/03/20 20:50:06 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		len ++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len ++;
	}
	return (len);
}

char	*zero(char *s)
{
	s[0] = '0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	j;

	j = n;
	i = len(j);
	str = (char *)malloc(sizeof (char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (j == 0)
	{
		zero(str);
	}
	if (j < 0)
	{
		str[0] = '-';
		j = j * -1;
	}
	while (j > 0)
	{
		str[i--] = '0' + (j % 10);
		j = j / 10;
	}
	return (str);
}
