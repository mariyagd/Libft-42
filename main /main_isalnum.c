/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:20:40 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/18 12:25:25 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c);

int main(void)
{
    int c = 305;
    printf("%d\n", isalnum(c));
    printf("%d\n", ft_isalnum(c));

	// 357 % 256 = 101 'e'
    c = 357;
    printf("%d\n", isalnum(c));
    printf("%d\n", ft_isalnum(c));

    // 325 % 256 = 69 'E'
    c = 325;
    printf("%d\n", isalnum(c));
    printf("%d\n", ft_isalnum(c));
	
	// 84 = 'T'
    c = 84;
    printf("%d\n", isalnum(c));
    printf("%d\n", ft_isalnum(c));

    return(0);
}

