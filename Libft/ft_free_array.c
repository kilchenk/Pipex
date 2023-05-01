/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:45:48 by kilchenk          #+#    #+#             */
/*   Updated: 2023/05/01 13:47:46 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	if (array)
	{
		while (array[i] != 0)
			free(array[i++]);
		free(array);
	}
}
