/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 00:00:43 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/13 11:19:12 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	*b1;

	b1 = b;
	if (b == 0)
		return (0);
	while (*b1 != 0 && len > 0)
	{
		*b1 = (unsigned char) c;
		b1++;
		len--;
	}
	return (b);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("\nFONCTION ORIGINALE MEMSETI:\n");
	char str1[10] = "123456789";
	printf("Chaine au debut         | %s\n", str1);
	printf("memset 122, 5           | %s\n", memset(str1, 122, 5));
	printf("memset 65, 9            | %s\n", memset(str1, 65, 9));
	printf("memset 322, 5           | %s\n", memset(str1, 322, 5));
	printf("memset 67, 2            | %s\n", memset(str1, 67, 2));
	printf("Chaine transforme       | %s\n", str1);
	printf("memset str+3, 121, 2    | %s\n", memset(str1 + 3, 121, 2));
	printf("Chaine finale           | %s\n", str1);

	printf("\nMA FONCTION MEMSET:\n");
	char str[10] = "123456789";
	printf("Chaine au debut         | %s\n", str);
	printf("ft_memset 122, 5        | %s\n", ft_memset(str, 122, 5));
	printf("ft_memset 65, 9         | %s\n", ft_memset(str, 65, 9));
	printf("ft_memset 322, 5        | %s\n", ft_memset(str, 322, 5));
	printf("ft_memset 67, 2         | %s\n", ft_memset(str, 67, 2));
	printf("Chaine transforme       | %s\n", str);
	printf("ft_memset str+3, 121, 2 | %s\n", ft_memset(str + 3, 121, 2));
	printf("Chaine finale           | %s\n", str);

	return (0);
}*/
