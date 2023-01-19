/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkukaqi <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:33:25 by bkukaqi           #+#    #+#             */
/*   Updated: 2022/10/28 16:25:40 by bkukaqi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	count++;
	if (s[0] == c)
		return (count - 1);
	return (count);
}

static char	*ft_newstr(char const *s, char c)
{
	char	*newstr;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	newstr = (char *)ft_calloc(i + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		newstr[i] = s[i];
		i++;
	}
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	strcount;
	size_t	i;

	if (!s)
		return (NULL);
	strcount = ft_strcount(s, c);
	tab = (char **)ft_calloc(strcount + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = ft_newstr(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (tab);
}
