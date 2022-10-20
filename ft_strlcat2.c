/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:25:13 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/19 16:15:00 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	n;

	k = 0;
	i = 0;
	j = 0;
	while (src[k])
		k++;
	while (dst[j])
		j++;
	n = j;
	if (dstsize < j)
		return (dstsize + k);
	if (dstsize > j + 1)
	{
		while (src[i] && j != (dstsize - 1))
		{
			dst[j++] = src[i++];
		}
		dst[j] = '\0';
	}
	return (n + k);
}
