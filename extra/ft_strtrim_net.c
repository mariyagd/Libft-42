/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:23:43 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/10 14:40:38 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char* str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = strlen(s1);
		while (s1[front] && strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char*)malloc(sizeof(char) * (rear - front + 1));
		if (str)
			strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}

