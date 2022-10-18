/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:26:44 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/18 14:51:58 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "libft.h"

int     main(void)
{
	printf("\n FONCTION ORIGINALE BZERO:\n");
	char str2[10] = "abcdefghi";
	bzero(str2, (0));
	printf("bzero(str, 0):         |%s\n", str2);
	
	char str3[10] = "abcdefghi";
	bzero(str3, 1);
	printf("bzero(str, 1):         |%s\n", str3);    
   
	printf("\n MA FONCTION BZERO:\n");
	char str4[10] = "abcdefghi";
	ft_bzero(str4, 0);
	printf("ft_zero(str, 0):       |%s\n", str4);
	
	char str5[10] = "abcdefghi";
	ft_bzero(str5, 1);
	printf("ft_bzero(str, 1):      |%s\n", str5);

                return (0);
}
