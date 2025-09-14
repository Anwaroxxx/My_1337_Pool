/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazarzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:34:22 by aazarzou          #+#    #+#             */
/*   Updated: 2025/09/02 10:23:56 by aazarzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	len = ft_strlen(src);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*output;
	int			i;

	output = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!output)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		output[i].size = ft_strlen(av[i]);
		output[i].str = av[i];
		output[i].copy = ft_strdup(av[i]);
		if (!output[i].copy)
		{
			while (--i >= 0)
				free(output[i].copy);
			free(output);
			return (NULL);
		}
		i++;
	}
	output[i].str = NULL;
	output[i].copy = NULL;
	output[i].size = 0;
	return (output);
}
