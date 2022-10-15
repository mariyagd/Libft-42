/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:23:43 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/13 16:25:12 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	front;
	unsigned int	end;
	unsigned int	i;
	char			*strtrim;

	front = 0;
	i = 0;
	end = (unsigned int)(ft_strlen(s1));
	while (s1[front] && ft_strchr(set, *(s1 + front)))
			front++;
	while (front < end && ft_strrchr(set, *(s1 + end - 1)))
			end--;
	strtrim = (char *)malloc((end - front + 1) * sizeof(char));
	if (!strtrim)
		return (NULL);
	i = 0;
	while (front < end)
		strtrim[i++] = s1[front++];
	strtrim[i] = 0;
	return (strtrim);
}
