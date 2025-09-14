/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazarzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:29:40 by aazarzou          #+#    #+#             */
/*   Updated: 2025/09/01 19:13:16 by aazarzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int	ft_strlen(int size, char **str, char *sep)
{
	int	i;
	int	j;
	int	len;
	int	lensep;

	lensep = 0;
	while (sep[lensep] != '\0')
		lensep++;
	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
			j++;
		len += j;
		if (i < size - 1)
			len += lensep;
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dest[j] != '\0')
	{
		while (dest[j] != '\0')
			j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		if (str)
			str[0] = '\0';
		return (str);
	}
	len = ft_strlen(size, strs, sep);
	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
