/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:28:59 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/12 14:22:55 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len);
size_t  ft_strlen(const char *s);

int	main(void)
{
	char	*str;
	str = "Contreconstitutionnel";
	//0 - 21
	printf("\nstr = \"Contreconstitutionnel\"\n");
	printf("%s %s\n","ft_substr(str, 6, 12): ", ft_substr(str, 6, 12));
	printf("%s %s\n", "ft_substr(str, 6, 0): ", ft_substr(str, 6, 0));
	printf("%s %s\n", "ft_substr(str, 6, 1): ", ft_substr(str, 6, 1));
	printf("%s %s\n", "ft_substr(str, 0, 10): ", ft_substr(str, 0, 10));
	printf("%s %s\n", "ft_substr(str, 0, 0): ", ft_substr(str, 0, 0));

	char *str1;
	str1 = "i just want this part #############";
	printf("\nstr1 = \"i just want this part #############\"\n");
    printf("%s %s\n","ft_substr(str1, 5, size): ", ft_substr(str1, 5, ft_strlen(str1)));
    printf("%s %s\n","ft_substr(str1, 0, 22): ", ft_substr(str1, 0, 22));

	char *str2;
	str2 = "hola";
	printf("\nstr2 = \"hola\"\n");
    printf("%s %s\n","ft_substr(str2, 0, 22): ", ft_substr(str2, 0, 22));

    char *str3;
    str3 = "hola";
    printf("\nstr3 = \"hola\"\n");
    printf("%s %s\n","ft_substr(str3, 22, 2): ", ft_substr(str3, 22, 2));
	return(0);
}



