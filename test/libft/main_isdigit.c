/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:16:09 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/18 12:22:02 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c);

int	main(void)
{
	// TEST 305 % 256 = 49 = '1'
	int c = 305;
	printf("%d\n", isdigit(c));
	printf("%d\n", ft_isdigit(c));
	return(0);
}

