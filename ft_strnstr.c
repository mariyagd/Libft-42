/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:15:52 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/26 11:12:30 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	count;

	k = 0;
	i = 0;
	count = 0;
	if (needle[k] == '\0')
		return ((char *)(haystack));
	while (i < len && haystack[i])
	{
		while (haystack[i] == needle[k] && i < len)
		{
			i++;
			k++;
			count++;
			if (count == ft_strlen(needle))
				return ((char *)(haystack +(i - count)));
		}
		if (haystack[i] != needle[0])
			i++;
		k = 0;
		count = 0;
	}
	return (NULL);
}
