/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:47:25 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 14:53:51 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1;
	char *s2;
	s1 = "mariya\0 est ici";
	printf("%c\n", s1[15]);
	
	s2 = strdup(s1);
	printf("%s\n", s2);
	int i = -1;
	while (++i <= 15)
	{
		printf("%c\n", s2[i]);
	}
	return (0);
}

