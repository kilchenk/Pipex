/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:33:40 by kilchenk          #+#    #+#             */
/*   Updated: 2023/03/20 20:49:04 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ignore_spaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	mark;
	int	num;
	int	i;

	i = 0;
	num = 0;
	mark = 1;
	while (ft_ignore_spaces(str[i]))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			mark = -mark;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '8' && num == 214748364)
			return (-2147483648);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * mark);
}

// int main(void)
// {
// 	printf("%d\n", ft_atoi("-+48"));
// }
