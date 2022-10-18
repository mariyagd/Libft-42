/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:35:48 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/26 15:33:39 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	printf("\n%d\n", strncmp("abcd","abdc",4));
	printf("%d\n", ft_strncmp("abcd","abdc",4));


	printf("\n%d\n", strncmp("abcd","abcd",4));
	printf("%d\n", ft_strncmp("abcd","abcd",4));


	printf("\n%d\n", strncmp("abcdefgh","abcdwxyz",4));
	printf("%d\n", ft_strncmp("abcdefgh","abcdwxyz",4));

	printf("\n%d\n", strncmp("abcd","abcd", 0));
	printf("%d\n", ft_strncmp("abcd","abcd", 0));

	printf("\n%d\n", strncmp("","abcd",4));
	printf("%d\n", ft_strncmp("","abcd",4));

	printf("\n%d\n", strncmp("abcd","",4));
	printf("%d\n", ft_strncmp("abcd","",4));


	printf("\n%d\n", strncmp("","",4));
	printf("%d\n", ft_strncmp("","",4));


	char s1[1] = "\n";
	char s2[1] = "a";
	printf("\n%d\n", strncmp(s1,s2,1));
	printf("%d\n", ft_strncmp(s1,s2,1));

	char *s3 = "\x12\xff\x65\x12\xbd\xde\xad";
 	char *s4 = "\x12\x02";

	printf("\n%d\n", strncmp(s3,s4,5));
	printf("%d\n", ft_strncmp(s3,s4,5));
	return (0);
}
