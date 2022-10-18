/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:11:09 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/29 16:40:09 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char *str1 = "mariaa";
	char *str2 = "mariza";
	char *str3[0];
	char *str4[0];
	char *str5[0];
   	*str5 = "";
	char *str6[15];
   	*str6 = "";
	
	printf("\n----------FONCTION ORIGINALE MEMCMP----------\n");
	printf("\nCAS NORMAL\n");
	printf("str1 = mariaa      str2 = mariza        n = 5             memset = %d\n", memcmp (str1, str2, 6));
	printf("str1 = mariaa      str2 = mariaa        n = 6             memset = %d\n", memcmp ("mariaa", "mariaa", 6));

	// cas de  segmentation fault
//	printf("%d\n", memcmp(str1, ((void*)0), 5));
//	printf("%d\n", memcmp(((void*)0),str2,  5));
//	printf("%d\n", memcmp(((void*)0),  ((void*)0), 5));

	//cas zero string
	printf("\nCAS STRING TAILLE ZERO\n");
	printf("str1 = \"\"          str2 = \"\"            n = 0             memcmp = %d\n", memcmp ("", "", 0));
	printf("str1 = \"\"          str2 = \"\"            n = 120           memcmp = %d\n", memcmp ("", "", 120));
	printf("str1 = \"\"          str2 = \"\"            n = 20            memcmp = %d\n", memcmp ("", "", 20));

	//donne des erreurs
	printf("\nCAS ERREURS\n");
	printf("str1[10] = \"\"      str2[10] = \"\"        n = 0             memcmp = %d\n", memcmp (str5, str6, 0));
	printf("str1[10] = \"\"      str2[10] = \"\"        n = 120           memcmp = %d\n", memcmp (str5, str6, 120));
	printf("str1[10] = \"\"      str2[10] = \"\"        n = 20            memcmp = %d\n", memcmp (str5, str6, 20));

	
	printf("\nCAS ERREURS\n");
	printf("str1[0]            str2[0]              n = 0             memcmp = %d\n", memcmp (str3, str4, 0));
	printf("str1[0]            str2[0]              n = 20            memcmp = %d\n", memcmp (str3, str4, 20));
	printf("str1[0]            str2[0]              n = 120           memcmp = %d\n", memcmp (str3, str4, 120));

	printf("\nAUTRES EXEMPLES\n");
	printf("str1 = \"aaabcdefg\"            str2 = \"aabc\"              n = 10             memcmp = %d\n", memcmp ("aaabcdefg", "aabc",10 ));
	printf("str1 = \"aabc\"                 str2 = \"aaabcdefg\"         n = 10            memcmp = %d\n", memcmp ("aabc", "aaabcdefg", 10));
	printf("str1 = \"aabcdefg\"             str2 = \"aabc\"              n = 4             memcmp = %d\n", memcmp ("aabcdefg", "aabc", 4));

   
	printf("\n----------MA FONCTION MEMCMP----------\n");
	printf("\nCAS NORMAL\n");
   	printf("str1 = mariaa      str2 = mariza        n = 5             memset = %d\n", ft_memcmp (str1, str2, 6));
	printf("str1 = mariaa      str2 = mariaa        n = 6             memset = %d\n", ft_memcmp ("mariaa", "mariaa", 6));

    // cas de  segmentation fault
//  printf("%d\n", ft_memcmp(str1, ((void*)0), 5));
//  printf("%d\n", ft_memcmp(((void*)0),str2,  5));
//  printf("%d\n", ft_memcmp(((void*)0),  ((void*)0), 5));

	// cas zero string
	printf("\nCAS STRING TAILLE ZERO\n");
	printf("str1 = \"\"          str2 = \"\"            n = 0             memcmp = %d\n", ft_memcmp ("", "", 0));
	printf("str = \"\"           str2 = \"\"            n = 20            memcmp = %d\n", ft_memcmp ("", "", 20));
	printf("str1 = \"\"          str2 = \"\"            n = 120           memcmp = %d\n", ft_memcmp ("", "", 120));

	 //donne des erreurs
	printf("\nCAS ERREURS\n");
	printf("str1[10] = \"\"      str2[10] = \"\"        n = 0             memcmp = %d\n", ft_memcmp (str5, str6, 0));
	printf("str1[10] = \"\"      str2[10] = \"\"        n = 120           memcmp = %d\n", ft_memcmp (str5, str6, 120));
	printf("str1[10] = \"\"      str2[10] = \"\"        n = 20            memcmp = %d\n", ft_memcmp (str5, str6, 20));
	
   	printf("\nCAS ERREURS\n");
	printf("str1[0]            str2[0]              n = 0             memcmp = %d\n", ft_memcmp (str3, str4, 0));
    printf("str1[0]            str2[0]              n = 20            memcmp = %d\n", ft_memcmp (str3, str4, 20));
    printf("str1[0]            str2[0]              n = 120           memcmp = %d\n", ft_memcmp (str3, str4, 120));

	return (0);
}

