/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp_strncmp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:05:42 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 13:31:32 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	
	char *s1;
	char *s2;

	s1 = "abcdefjhigklmn";
	s2 = "abcdefjhigklmn";
	
	//seg fault pour strncmp
//	printf("strncmp = %d\n", strncmp(((void *)0), s2, 15));
//	printf("strncmp = %d\n", strncmp(s1, ((void *)0), 15));
//	printf("strncmp = %d\n", strncmp(((void *)0), ((void *)0), 15));
	
	printf("\ns1 = \'abcdefjhigklmn\' s2 = \'abcdefjhigklmn\' n = 15\n");
	printf("strncmp = %d\n", strncmp(s1, s2, 15));
	printf("memcmp  = %d\n", memcmp(s1, s2, 15));
	
	printf("\ns1 = "" s2 = "" n = 15\n");
	printf("strncmp = %d\n", strncmp("", "", 15));
	printf("memcmp  = %d\n", memcmp("", "", 15));
	
	char *s3;
	char *s4;

	s3 = "abcdef\0jhigklmn";
	s4 = "abcdef\0e";
	printf("\ns1 = \'abcdef\\0jhigklmn\' s2 = \'abcdef\\0ehigklmn\' n = 15\n");
	printf("strncmp = %d\n", strncmp(s3, s4, 15));
	printf("memcmp  = %d\n", memcmp(s3, s4, 15));
	return (0);
}
