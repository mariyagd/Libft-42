/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:05:15 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/10 14:23:00 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "Hello";
	s2 = " Kitty";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
