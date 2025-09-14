/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazarzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:16:08 by aazarzou          #+#    #+#             */
/*   Updated: 2025/08/21 10:36:08 by aazarzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	total_len;

	dest_len = my_strlen(dest);
	src_len = my_strlen(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	i = 0;
	while (src[i] && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
