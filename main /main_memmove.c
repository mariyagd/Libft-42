/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:24:00 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 10:07:10 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int	main(void)
{
    printf("\nFONCTION ORIGINALE MEMMOVE COMPORTEMENT COMME MEMCPY\n");
    char dst[7]= "1234567";
    printf("%s\n", memmove(dst, "mariya", 5));
    printf("%s\n", memmove(((void*)0), ((void*)0) , 3));
//    printf("%s\n", memmove(((void*)0), ((void*)0) , 3));
//    printf("%s\n", memmove(((void*)0), "segfaulter tu dois", 17));

    printf("\nFONCTION ORIGINALE MEMMOVE CAS DE CHEVAUCHEMENT\n");
    char src[26]= "ABCDEFGHIGKLMNOPQRSTUVWXYZ";
    printf("%s\n", memmove(src, src + 13 , 10));
    printf("%s\n", memmove(((void*)0), ((void*)0) , 3));
//    printf("%s\n", memmove(((void*)0), "segfaulter tu dois", 17));

    printf("\nFONCTION ORIGINALE MEMCPY CAS DE CHEVAUCHEMENT\n");
    char src1[26]= "ABCDEFGHIGKLMNOPQRSTUVWXYZ";
    printf("%s\n", memcpy(src1, src1 + 13 , 10));
       return(0);
}





