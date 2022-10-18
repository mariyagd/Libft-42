/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_cpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:11:57 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/30 22:57:33 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	ft_print(char *dst, size_t n)
{
	int	i;
	i = -1;
	while (++i <= n)
	{
		printf("dst[%d] = %c \n", i, dst[i]);
	}
}


int	main(void)
{
	char *src;
	src = "abcd";
	char dst_cpy[5];
	char dst_ncpy[4];
	char dst_lcpy[4];

	char dst_memcpy[4];


	printf("---------------------------------");
	printf("\nSRC\n");
	ft_print(src, 4);

	printf("---------------------------------");
	printf("\nDST AVANT STRCPY \n");
	ft_print(dst_cpy, 4);
	printf("\nDST APRES STRCPY\n");
	strcpy(dst_cpy, src);
	ft_print(dst_cpy, 4);
	

	printf("---------------------------------");
	printf("\nDST AVANT STRNCPY \n");
	ft_print(dst_ncpy, 4);
	printf("\nDST APRES STRNCPY\n");
	strncpy(dst_ncpy, src, 4);
	ft_print(dst_ncpy, 4);

	printf("---------------------------------");
	printf("\nDST AVANT STRLCPY\n");
	ft_print(dst_lcpy, 5);
	printf("\nDST APRES STRLCPY\n");
	strlcpy(dst_lcpy, src, 4);
	ft_print(dst_lcpy, 4);

	printf("---------------------------------");
	printf("\nDST AVANT MEMCPY\n");
	ft_print(dst_memcpy, 4);
	printf("\nDST APRES MEMCPY\n");
	memcpy(dst_memcpy, src, 4);
	ft_print(dst_memcpy, 4);


	char src1[] = { 'a', 'b', 'c', '\0', 'd', 'e', '\0', 'f', 'g', '\0' };
	char dst_cpy1[11];
	char dst_ncpy1[10];
	char dst_lcpy1[10];

	char dst_memcpy1[10];


	printf("---------------------------------");
	printf("\nSRC\n");
	ft_print(src1, 10);

	printf("---------------------------------");
	printf("\nDST AVANT STRCPY \n");
	ft_print(dst_cpy1, 10);
	printf("\nDST APRES STRCPY\n");
	strcpy(dst_cpy1, src1);
	ft_print(dst_cpy1, 10);
	

	printf("---------------------------------");
	printf("\nDST AVANT STRNCPY \n");
	ft_print(dst_ncpy1, 10);
	printf("\nDST APRES STRNCPY\n");
	strncpy(dst_ncpy1, src1, 10);
	ft_print(dst_ncpy1, 10);

	printf("---------------------------------");
	printf("\nDST AVANT STRLCPY\n");
	ft_print(dst_lcpy1, 10);
	printf("\nDST APRES STRLCPY\n");
	strlcpy(dst_lcpy1, src, 10);
	ft_print(dst_lcpy1, 10);

	printf("---------------------------------");
	printf("\nDST AVANT MEMCPY\n");
	ft_print(dst_memcpy1, 10);
	printf("\nDST APRES MEMCPY\n");
	memcpy(dst_memcpy1, src, 10);
	ft_print(dst_memcpy1, 4);



}

