/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:56:39 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/13 12:44:54 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	printf("\n--------------------FONCTION ORIGINALE STRLCAT--------------------\n");
	
	//cas pas de concatenation

    //cas de concatenation reussie	

	char s1[4] = "";
	char s3[8] = "1234";

	printf("%lu %s\n", strlcat(s1, "thx to ntoniolo for this test !", 4), s1);

	printf("%lu %s\n", strlcat(s3, "HELL", 8), s3);

	char str3[25] = "1234567890123456789"; //src
	char str5[50] = "HELLO WORLD"; //dst
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 0     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 0), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 1     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 1), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 2     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 2), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 3     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 3), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 4     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 4), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 5     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 5), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 6     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 6), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 7     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 7), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 8     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 8), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 9     strlcat = %lu       dst = %s\n", strlcat(str5, str3, 9), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 10    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 10), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 11    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 11), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 12    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 12), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 13    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 13), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 14    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 14), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 15    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 15), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 16    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 16), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 17    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 17), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 18    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 18), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 19    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 19), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 20    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 20), str5);

	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 21    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 21), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 22    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 22), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 23    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 23), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 24    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 24), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 25    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 25), str5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 26    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 26), str5);
	
		
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 50    strlcat = %lu       dst = %s\n", strlcat(str5, str3, 50), str5);

	char str1[25] = "1234567890123456789"; //src
	char str2[50] = "HELLO WORLD"; //dst
	printf("\n");
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 20     strlcat = %lu      dst = %s\n", strlcat(str2, str1, 20), str2);


	printf("\n--------------------MA FONCTION STRLCAT--------------------\n");
	
	//cas pas de concatenation

    //cas de concatenation reussie	
	char s2[4] = "";
	char s5[8] = "1234";
	printf("%lu %s\n", strlcat(s2, "thx to ntoniolo for this test !", 4), s2);

	printf("%lu %s\n", strlcat(s5, "HELL", 8), s5);

	char ptr3[25] = "1234567890123456789"; //src
	char ptr5[50] = "HELLO WORLD"; //dst
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 0     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 0), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 1     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 1), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 2     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 2), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 3     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 3), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 4     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 4), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 5     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 5), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 6     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 6), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 7     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 7), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 8     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 8), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 9     strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 9), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 10    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 10), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 11    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 11), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 12    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 12), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 13    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 13), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 14    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 14), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 15    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 15), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 16    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 16), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 17    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 17), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 18    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 18), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 19    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 19), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 20    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 20), ptr5);

	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 21    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 21), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 22    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 22), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 23    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 23), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 24    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 24), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 25    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 25), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 26    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 26), ptr5);
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 50    strlcat = %lu       dst = %s\n", ft_strlcat(ptr5, ptr3, 50), ptr5);

	char ptr1[25] = "1234567890123456789"; //src
	char ptr2[50] = "HELLO WORLD"; //dst
	printf("\n");
	printf("src[25] = \"1234567890123456789\"            dst[50] = \"HELLO WORLD\"        dstsize = 20     strlcat = %lu      dst = %s\n", ft_strlcat(ptr2, ptr1, 20), ptr2);
	return (0);
}
