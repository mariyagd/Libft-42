/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:26:44 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/18 15:20:48 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "libft.h"

int     main(void)
{
        printf("\n--------------FONCTION ORIGINALE MEMSET:------------\n");
        char str1[10] = "123456789";
        printf("\nChaine au debut         | %s\n", str1);
        printf("memset 378, 5           | %s\n", memset(str1, 378, 5));
        printf("memset 65, 9            | %s\n", memset(str1, 65, 9));
        printf("memset 322, 5           | %s\n", memset(str1, 322, 5));
        printf("memset 67, 2            | %s\n", memset(str1, 67, 2));
        printf("Chaine transforme       | %s\n", str1);
        printf("memset str+3, 121, 2    | %s\n", memset(str1 + 3, 121, 2));
        printf("Chaine finale           | %s\n", str1);

        char str2[10] = "123456789";
        printf("\nChaine au debut         | %s\n", str2);
		str2[2] = '\0';
        printf("Chaine modifiee         | %s\n", str2);
        printf("memset 378, 5           | %s\n", memset(str2, 378, 9));

		printf("\n------------MA FONCTION MEMSET:--------------\n");
        char str[10] = "123456789";
        printf("\nChaine au debut         | %s\n", str);
        printf("ft_memset 378, 5        | %s\n", ft_memset(str, 378, 5));
        printf("ft_memset 65, 9         | %s\n", ft_memset(str, 65, 9));
        printf("ft_memset 322, 5        | %s\n", ft_memset(str, 322, 5));
        printf("ft_memset 67, 2         | %s\n", ft_memset(str, 67, 2));
        printf("Chaine transforme       | %s\n", str);
        printf("ft_memset str+3, 121, 2 | %s\n", ft_memset(str + 3, 121, 2));
        printf("Chaine finale           | %s\n", str);

		char str3[10] = "123456789";
        printf("\nChaine au debut         | %s\n", str3);
        str3[2] = '\0';
        printf("Chaine modifiee         | %s\n", str3);
        printf("memset 378, 5           | %s\n", memset(str3, 378, 9));
	return(0);
}
