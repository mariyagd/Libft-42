/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:15:52 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/30 14:11:36 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	count;
	size_t	len_needle;
	size_t	len_haystack;

	k = 0;
	i = 0;
	count = 0;
	len_needle = ft_strlen(needle);
	len_haystack = ft_strlen(haystack);
	if (needle[k] == '\0')
		return ((char *)(haystack));
	if (len_haystack < len_needle)
		return (NULL);
	if (len > len_haystack)
		len = len_haystack;
	while (len >= len_needle && haystack[i])
	{
		while (haystack[i + k] == needle[k])
		{
			k++;
			count++;
			len--;
			if (count == len_needle)
				return ((char *)(haystack + i));
		}
		i++;
		len = (len + k + i - 1) - i;
		k = 0;
		count = 0;
	}
	return (NULL);
}
