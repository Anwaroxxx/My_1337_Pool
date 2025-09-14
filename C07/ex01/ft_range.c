/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazarzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 12:25:12 by aazarzou          #+#    #+#             */
/*   Updated: 2025/09/01 13:27:05 by aazarzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	array = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
