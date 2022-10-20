/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:00:31 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 12:10:12 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c);

int	main(void)
{
	// 357 % 256 = 101 'e'
	int c = 357;
	printf("\n357 %% 256 = 101 \'e\'\n");
	printf("c = 357, isalpha(c) = %d\n", isalpha(c));
	printf("c = 357, isalpha(c) = %d\n", ft_isalpha(c));

	// 325 % 256 = 69 'E'
	c = 325;
	printf("\n325 %% 256 = 69 \'E\'\n");
	printf("c = 325, isalpha(c) = %d\n", isalpha(c));
	printf("c = 325, isalpha(c) = %d\n", ft_isalpha(c));

	// 84 = 'T'
	c = 84;
	printf("\n84 = \'T\'\n");
    printf("c = 84 , isalpha(c) = %d\n", isalpha(c));
    printf("c = 84 , isalpha(c) = %d\n", ft_isalpha(c));

	return (0);
}


