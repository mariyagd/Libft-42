/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:24:00 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/18 17:53:58 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int	main(void)
{
    printf("\nFONCTION ORIGINALE MEMCPY\n");
    char dst[7]= {'1', '2', '3', '\0', '\0', '\0', '7'};
	printf("%c\n", dst[6]);
    printf("%s\n", memcpy(dst, "mariya", 5));
    printf("%s\n", memcpy(((void*)0), ((void*)0) , 3));
    printf("%s\n", memcpy("mariya", "mariya", 6));
//  printf("%s\n", memcpy(((void*)0), "segfaulter tu dois", 17));
    printf("%s\n", memcpy( "segfaulter tu dois", ((void*)0), 17));

       return(0);
}





