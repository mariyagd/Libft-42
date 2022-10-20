/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:35:44 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/17 17:48:42 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char f(unsigned int i, char c)
{
	char	str;
	i = 4;

	str = c + 1;
	return (str);
}


int	main(void)
{
	char	*s;
	char	*new_s;
	
	s = "hello!";
	new_s = ft_strmapi(s, *f);
	printf("%s\n", new_s);
   return (0);
}   
	

