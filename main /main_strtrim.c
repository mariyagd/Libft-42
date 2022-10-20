/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:06 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/13 14:56:43 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char *s1;
	char *set1;

	s1 = "zxavocadozx";
	set1 = "xyz";
	printf("\n%s\n", ft_strtrim(s1, set1));


	char *s2;
	char *set2;
	s2 = "xzavocado";
	set2 = "xyz";
	printf("\n%s\n", ft_strtrim(s2, set2));

	char *s22;
	char *set22;
	s22 = "xzaxvzoyczaxdo";
	set22 = "xyz";
	printf("\n%s\n", ft_strtrim(s22, set22));

	char *s3;
	char *set3;
	s3 = "hello";
	set3 = "xyz";
	printf("\n%s\n", ft_strtrim(s3, set3));
	
	char *s4;
	char *set4;
	s4 = "xzavocado";
	set4 = "";
	printf("\n%s\n", ft_strtrim(s4, set4));
	
	char *s5;
	char *set5;
	s5 = "lorem \n ipsum \t dolor \n sit \t amet ";
	set5 = " ";
	printf("\n%s\n", ft_strtrim(s5, set5));
	
	char *s6;
	char *set6;
	s6 = "lorem ipsum dolor sit amet";
	set6 = "et";
	printf("\n%s\n", ft_strtrim(s6, set6));

	char *s7;
	char *set7;
	s7 = "     ";
	set7 = " ";
	printf("\n%s\n", ft_strtrim(s7, set7));
	return (0);
}
