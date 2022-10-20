/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:15:22 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/17 10:14:26 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int	main(void)
{
    char dst[18] = "12345678901234567";
    char src[9] = "ABCDEFHIG";
    char src1[10] = "**C***";
    char src2[10] = "AB";
    char src3[2] = "CD";
    char src4[9] = "123456789";
    
    printf("\nFONCTION ORIGINALE DST AVANT MEMCPY                  = %s\n", dst);
    memccpy(dst, src, 70, 9);
    printf("src = ABCDEFGHI      c = 70 (lettre F)    n = 9    dst = %s \n", dst);
    memccpy(dst, src1, 66, 5);
    printf("src1 = **C***        c = 66 (lettre B)    n = 5    dst = %s \n", dst);
    memccpy(dst, src2, 66, 2);
    printf("src2 = AB            c = 66 (lettre B)    n = 2    dst = %s \n", dst);
    memccpy(dst, src2, 70, 8);
    printf("src2 = AB            c = 70 (lettre F)    n = 8    dst = %s \n", dst);
    memccpy(dst, src3, 67, 2);
    printf("src3 = CD            c = 67 (lettre C)    n = 2    dst = %s \n", dst);
    memccpy(dst, src4, 122, 9);
    printf("src4 = 123456789     c = 122 (lettre z)   n = 9    dst = %s \n", dst);
// Si un des pointeurs ou les pointeurs sont NULL, alors cela donne une seg fault    
//  memccpy(((void*)0), src2, 122, 2);
//  memccpy(dst, ((void*)0), 122, 2);
//  memccpy(((void*)0), ((void*)0), 122, 2);
	
    char src6[] = "test basic du memccpy !";
    char buff2[22] = "123456";
    memccpy(buff2, src6, 't', 0);
    printf("dst = 123456    src6 = test basic du memccpy  c = 't'    n = 0      dst = %s \n", buff2);
    memccpy(buff2, src6, 'z', 22);
    printf("dst = 123456    src6 = test basic du memccpy  c = 'z'    n = 22     dst = %s \n", buff2);



    char dst1[18] = "12345678901234567";
    
    printf("\nMA FONCTION DST AVANT MEMCPY                          = %s\n", dst1);
    ft_memccpy(dst1, src, 70, 9);
    printf("src = ABCDEFGHI      c = 70 (lettre F)    n = 9    dst = %s \n", dst1);
    ft_memccpy(dst1, src1, 66, 5);
    printf("src1 = **C***        c = 66 (lettre B)    n = 5    dst = %s \n", dst1);
    ft_memccpy(dst1, src2, 66, 2);
    printf("src2 = AB            c = 66 (lettre B)    n = 2    dst = %s \n", dst1);
    ft_memccpy(dst1, src2, 70, 8);
    printf("src2 = AB            c = 70 (lettre F)    n = 8    dst = %s \n", dst1);
    ft_memccpy(dst1, src3, 67, 2);
    printf("src3 = CD            c = 67 (lettre C)    n = 2    dst = %s \n", dst1);
    ft_memccpy(dst1, src4, 122, 9);
    printf("src4 = 123456789     c = 122 (lettre z)   n = 9    dst = %s \n", dst);
// Si un des pointeurs ou les pointeurs sont NULL, alors cela donne une seg fault    
//  memccpy(((void*)0), src2, 122, 2);
//  memccpy(dst, ((void*)0), 122, 2);
//  memccpy(((void*)0), ((void*)0), 122, 2);

	char buff1[22] = "123456";
	ft_memccpy(buff1, src6, 't', 0);
	printf("dst = 123456   src6 = test basic du memccpy  c = 't'    n = 0      dst = %s\n", buff1);
	ft_memccpy(buff1, src6, 'z', 22);
	printf("dst = 123456   src6 = test basic du memccpy  c = 'z'    n = 22     dst = %s \n", buff1);

   return(0);
} 
