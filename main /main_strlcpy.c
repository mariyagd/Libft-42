/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:40:48 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 11:05:52 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
//	printf("dst[16] = \"Bonjour, Mariya\"    src[16] = \"Bonjour, Mariya!\"    dstsize = 7     strlcpy = %lu", strlcpy(str2, str1, 7)); printf("   dst[16] = %s\n", str2);
	
	char *str1 = "Bonjour, Mariya!";
	char str2[16];
	
	printf("\n-----------------------FONCTION ORGINALE STRLCPY-----------------------\n");

	char *s;
	char *d;

	s = "Hello kitty!";
	d = "world!";
	printf("%c\n", s[12]);
	printf("dst[6] = \"world!\"    src[12] = \"Hello kitty!\"    dstsize = 0     strlcpy = %lu", strlcpy(d, s, 0)); printf("   dst[6] = %s\n", d);
	
	printf("\ndst[16]                        src[16] = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", strlcpy(str2, str1, 16)); printf("   dst[16] = %s\n", str2);
	printf("dst[16] = \"Bonjour, Mariya\"    src[16] = \"Bonjour, Mariya!\"    dstsize = 7     strlcpy = %lu", strlcpy(str2, str1, 7)); printf("   dst[16] = %s\n", str2);
	printf("dst[16] = \"Bonjou\"             src[16] = \"Bonjour, Mariya!\"    dstsize = 0     strlcpy = %lu", strlcpy(str2, str1, 0)); printf("   dst[16] = %s\n", str2);


	char str3[16] = "Bonjour!";
	char str4[16] = "Mon nom est Mari";
	printf("\n");	
	printf("dst[16] = \"Mon nom est Mari\"   src[16] = \"Bonjour!\"            dstsize = 16    strlcpy = %lu", strlcpy(str4, str3, 16)); printf("    dst[16] = %s\n", str4);
	printf("dst[16] = \"Bonjour|\"           src[16] = \"Bonjour!\"            dstsize = 7     strlcpy = %lu", strlcpy(str4, str3, 7)); printf("    dst[16] = %s\n", str4);
	printf("dst[16] = \"Bonjou\"             src[16] = \"Bonjour!\"            dstsize = 0     strlcpy = %lu", strlcpy(str4, str3, 0)); printf("    dst[16] = %s\n", str4);

	char str5[16] = "Bonjour!";
	char str6[16] = "Mon nom est Mari";
	printf("\n");	
	printf("dst[16] = \"Mon nom est Mari\"   src[16] = \"Bonjour!\"            dstsize = 5     strlcpy = %lu", strlcpy(str6, str5, 5)); printf("    dst[16] = %s\n", str6);
	

	printf("dst[16] = \"Bonj\"               src[16] = \"Bonjour!\"            dstsize = 3     strlcpy = %lu", strlcpy(str6, str5, 3)); printf("    dst[16] = %s\n", str6);


	printf("dst[16] = \"Bo\"                 src[16] = \"Bonjour!\"            dstsize = 0     strlcpy = %lu", strlcpy(str6, str5, 0)); printf("    dst[16] = %s\n", str6);


	char *str7 = "Bonjour, Mariya!";
	char str8[10] = "1234567890";
	printf("\n");	
	printf("dst[10] = \"1234567890\"         src[16] = \"Bonjour, Mariya!\"    dstsize = 10    strlcpy = %lu", strlcpy(str8, str7, 10)); printf("   dst[16] = %s\n", str8);


// cas de segmentation faul
//	printf("dst[16]                      src = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", strlcpy(((void*)0), str1, 16)); 
//	printf("dst[16]                      src = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", strlcpy(str2, ((void*)0), 16)); 
//	printf("dst[16]                      src = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", strlcpy(((void*)0), ((void*)0), 16));


	char *ptr1 = "Bonjour, Mariya!";
	char ptr2[16];

	printf("\n-----------------------MA FONCTION STRLCPY-----------------------\n");

	char *s1;
	char *d1;

	s1 = "Hello kitty!";
	d1 = "world!";
	printf("%c\n", s1[12]);
	printf("dst[6] = \"world!\"    src[12] = \"Hello kitty!\"    dstsize = 0     strlcpy = %lu", strlcpy(d1, s1, 0)); printf("   dst[6] = %s\n", d1);

	printf("dst[16]                        src[16] = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", ft_strlcpy(ptr2, ptr1, 16)); printf("   dst[16] = %s\n", ptr2);
	printf("dst[16] = \"Bonjour, Mariya\"    src[16] = \"Bonjour, Mariya!\"    dstsize = 7     strlcpy = %lu", ft_strlcpy(ptr2, ptr1, 7)); printf("   dst[16] = %s\n", ptr2);
	printf("dst[16] = \"Bonjou\"             src[16] = \"Bonjour, Mariya!\"    dstsize = 0     strlcpy = %lu", ft_strlcpy(ptr2, ptr1, 0)); printf("   dst[16] = %s\n", ptr2);


	char ptr3[16] = "Bonjour!";
	char ptr4[16] = "Mon nom est Mari";
	printf("\n");	
	printf("dst[16] = \"Mon nom est Mari\"   src[16] = \"Bonjour!\"            dstsize = 16    strlcpy = %lu", ft_strlcpy(ptr4, ptr3, 16)); printf("    dst[16] = %s\n", ptr4);
	printf("dst[16] = \"Bonjour|\"           src[16] = \"Bonjour!\"            dstsize = 7     strlcpy = %lu", ft_strlcpy(ptr4, ptr3, 7)); printf("    dst[16] = %s\n", ptr4);
	printf("dst[16] = \"Bonjou\"             src[16] = \"Bonjour!\"            dstsize = 0     strlcpy = %lu", ft_strlcpy(ptr4, ptr3, 0)); printf("    dst[16] = %s\n", ptr4);

	char ptr5[16] = "Bonjour!";
	char ptr6[16] = "Mon nom est Mari";
	printf("\n");	
	printf("dst[16] = \"Mon nom est Mari\"   src[16] = \"Bonjour!\"            dstsize = 5     strlcpy = %lu", ft_strlcpy(ptr6, ptr5, 5)); printf("    dst[16] = %s\n", ptr6);
	printf("dst[16] = \"Bonj\"               src[16] = \"Bonjour!\"            dstsize = 3     strlcpy = %lu", ft_strlcpy(ptr6, ptr5, 3)); printf("    dst[16] = %s\n", ptr6);
	printf("dst[16] = \"Bo\"                 src[16] = \"Bonjour!\"            dstsize = 0     strlcpy = %lu", ft_strlcpy(ptr6, ptr5, 0)); printf("    dst[16] = %s\n", ptr6);


	char *ptr7 = "Bonjour, Mariya!";
	char ptr8[10] = "1234567890";
	printf("\n");	
	printf("dst[10] = \"1234567890\"         src[16] = \"Bonjour, Mariya!\"    dstsize = 10    strlcpy = %lu", ft_strlcpy(ptr8, ptr7, 10)); printf("   dst[16] = %s\n", ptr8);


// cas de segmentation faul
//	printf("dst[16]                      src = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", ft_strlcpy(((void*)0), str1, 16)); 
//	printf("dst[16]                      src = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", ft_strlcpy(str2, ((void*)0), 16)); 
//	printf("dst[16]                      src = \"Bonjour, Mariya!\"    dstsize = 16    strlcpy = %lu", ft_strlcpy(((void*)0), ((void*)0), 16)); 
	return (0);
}

