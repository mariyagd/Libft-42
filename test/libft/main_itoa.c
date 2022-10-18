/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:29:35 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/17 17:14:42 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stdio.h>
char *ft_itoa(int n);
void    *ft_calloc(size_t count, size_t size);

size_t	ft_count_nbchar1(int n)
{
	size_t count;

    count = 0;
	if (n == 0)
		count++;
	if (n > 0)
	{
		while(n > 0)
		{
			n = n / 10;
			count++;
		}
	}
	if (n < 0)
	{
		while ( n < 0)
		{
			n = n / 10;
			count++;
		}
		count++;
	}
	return (count);
}

int	main(void)
{
	//TEST VALEURS MAX ET MIN DE INT
	printf("INT_MAX = %i\n", INT_MAX);
	printf("INT_MIN = %i\n", INT_MIN);
	
	//TEST NB DE CHIFFRES DANS UN INT DONNE
	int n = 1236;
	printf("%zu\n",ft_count_nbchar1(n));

	n = -1;
	printf("%zu\n",ft_count_nbchar1(n));

	n = 2147483647;
	printf("%zu\n",ft_count_nbchar1(n));

	n = -2147483648;
	printf("%zu\n",ft_count_nbchar1(n));

	n = 0;
	printf("%zu\n",ft_count_nbchar1(n));
	
	//TEST COPIE D'UN INT NEGATIF
	//TEST SEULEMENT POUR DES VALEURS PLUS GRANDES QUE -2147483648
	n = -1236;
	size_t nb_char = ft_count_nbchar1(n);
	int result = 0;
	char *itoa_str;
	itoa_str = (char *)ft_calloc((nb_char + 1), sizeof(char));
    size_t buff = 0;
	while (buff < nb_char)
	{
		itoa_str[buff] = '0';
		buff++;
	}
	if (!itoa_str)
        return (0);
	n = n * (-1);
	while (n > 0)
        {
            result = (n % 10);
            itoa_str[nb_char - 1] = (char)(result + 48);
            n = n / 10;
            nb_char--;
        }
        itoa_str[--nb_char] = '-';
	printf("%s\n", itoa_str);

	//TEST DE FT_ITOA
	n = -2147483648;
	char *str;
	str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
}


