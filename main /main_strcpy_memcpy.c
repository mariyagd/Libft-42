/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy_memcpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:55:42 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/30 20:47:02 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void * dst, const void *src, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);

int	main(void)
{
	char src[20] = "abcdefghigklmnop";
	src[4] = '\0';
	src[7] = '\0';
	src[13] = '\0';
	char dst0[20];
	char dst[20];
	char dst1[20];
	char dst2[20];
	char dst3[20];
	char dst4[20];
	int i = -1;
	char st[20];
	char st1[20];
	char st2[20];
	char st3[20];
	char st4[20];
	strcpy(st, src);
	memcpy(st1, src, 16);
	memcpy(st2, src, 10);
	strncpy(st3, src, 16);
	strncpy(st4, src, 10);
	ft_strcpy(dst, src);
	ft_memcpy(dst1, src, 16);
	ft_memcpy(dst2, src, 10);
	ft_strncpy(dst3, src, 16);
	ft_strncpy(dst4, src, 10);

	while (i++ < 16)
	{
		printf ("src[%d] = %c \n", i, src[i]);
	}
	printf("\n");
	i = -1;
	while (i++ < 20)
	{
		printf ("dst[%d] = %c \n", i, dst0[i]);
	}
	printf("\n");
	printf("\n");
	i = -1;
	while (i++ < 20)
	{
		printf ("FT_STRCPY: dst[%d] = %c         STRCPY: dst[%d] = %c \n", i, dst[i], i, st[i]);
	}
	printf("\n");
	printf("\n");
	i = -1;
	while (i++ < 20)
	{
		printf ("FT_MEMCPY(n=20): dst[%d] = %c         MEMCPY(n=20): dst[%d] = %c \n", i, dst1[i], i, st1[i]);
	}
	printf("\n");
	printf("\n");
	i = -1;
	while (i++ < 20)
	{
		printf ("FT_MEMCPY(n=10): dst[%d] = %c         MEMCPY(n=10): dst[%d] = %c \n", i, dst2[i], i, st2[i]);
	}
	printf("\n");
	printf("\n");
	i = -1;
	while (i++ < 20)
	{
		printf ("FT_STRNCPY(n=20): dst[%d] = %c         STRNCPY(n=20): dst[%d] = %c \n", i, dst3[i], i, st3[i]);
	}
	printf("\n");
	printf("\n");
	i = -1;
	while (i++ < 20)
	{
		printf ("FT_STRNCPY(n=10): dst[%d] = %c         STRNCPY(n=10): dst[%d] = %c \n", i, dst4[i], i, st4[i]);
	}

	printf("\n");
	char *source;
   	source = "abcd";
	char source1[4] = "abcd";
	char desti[4];
	char destk[5];
	i = -1;
	while (++i <= 4)
	{
		printf("source[%d] = %c \n", i, source[i]);
	}
	strncpy(desti, source, 4);
	i = -1;
	while (++i <= 4)
	{
		printf("STRNCPYdest[%d] = %c \n", i, desti[i]);
	}
	strcpy(destk, source1);
	i = -1;
	while (++i <= 5)
	{
		printf("STRCPYdest[%d] = %c \n", i, destk[i]);
	}

}
