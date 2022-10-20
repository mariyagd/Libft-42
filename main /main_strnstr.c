/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:03:31 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 13:56:33 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	printf("\nhaystack == \"aabc\"   needle = \"aabcabcd\"  len = 50\n");
	printf("%s\n", strnstr("aabc", "aabcabcd", 50));
	printf("%s\n", ft_strnstr("aabc", "aabcabcd", 50));
	
	printf("\nhaystack == \"aabc\"   needle = \"aabcabcd\"  len = 6\n");
	printf("%s\n", strnstr("aabc", "aabcabcd", 6));
	printf("%s\n", ft_strnstr("aabc", "aabcabcd", 6));
	
	char  haystack[30] = "aaabcabcd";
	char  needle[10] = "aabc";
	printf("\nhaystack == \"aaabcabcd\"   needle = \"aabc\"  len = -1\n");
	printf("%s\n", strnstr(haystack, needle, -1));
	printf("%s\n", ft_strnstr(haystack, needle, -1));

	printf("\nhaystack == \"aaabcabcd\"   needle = \"aabc\"  len = 10\n");
	printf("%s\n", strnstr(haystack, needle, 10));
	printf("%s\n", ft_strnstr(haystack, needle, 10));

	printf("\nhaystack == \"aaabbcaaabcd\"   needle = \"aabc\"  len = 12\n");
	printf("%s\n", strnstr("aaabbcaaabcd", needle, 12));
	printf("%s\n", ft_strnstr("aaabbcaaabcd", needle, 12));
	
	char h[25] = "AA12A11112A11123AA";
	char n[3] = "123";

	printf("\nhaystack = \"AAA1122123\"  needle = \"123\" len = 8\n"); 
	printf("%s\n", strnstr("AAA1122123", n, 8));
	printf("%s\n", ft_strnstr("AAA1122123",n,8));

	printf("\nhaystack = \"AAA1122123\"  needle = \"123\" len = 0\n"); 
	printf("%s\n", strnstr("AAA1122123", n, 0));
	printf("%s\n", ft_strnstr("AAA1122123",n,0));

	printf("\nhaystack = \"111232123\"  needle = \"1123\" len = 10\n"); 
	printf("%s\n", strnstr("111232123", "1123", 10));
	printf("%s\n", ft_strnstr("111232123","1123",10));

	printf("\nhaystack = \"123\"  needle = \"123\" len = 3\n"); 
	printf("%s\n", strnstr("123", n, 3));
	printf("%s\n", ft_strnstr("123",n,3));

	printf("\nhaystack = \"123\"  needle = \"123\" len = -3\n"); 
	printf("%s\n", strnstr("123", n, -3));
	printf("%s\n", ft_strnstr("123",n, -3));
	
	printf("\nhaystack = \"AA12A11112A11123AA\"  needle = \"123\" len = 10\n"); 
	printf("%s\n", strnstr(h, n, 10));
	printf("%s\n", ft_strnstr(h,n,10));

	printf("\nhaystack = \"AA12A11112A11123AA\"  needle = \"123\" len = 19\n"); 
	printf("%s\n", strnstr(h, n, 19));
	printf("%s\n", ft_strnstr(h,n,19));
	
	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	printf("\nhaystack = \"oh no not the empty string !\"  needle = \"\" len = 29\n"); 
	printf("%s\n", i1);
	printf("%s\n", i2);


	char h1[31] = "oh no not the empty string !";
	char n1[3] = "";
	
	printf("\nhaystack = \"oh no not the empty string !\"  needle = \"\" len = 0\n"); 
	printf("%s\n", strnstr(h1,n1,0));
	printf("%s\n", ft_strnstr(h1,n1,0));

	printf("\nhaystack = \"abcdefgh\"  needle = \"abc\" len = 2\n"); 
	printf("%s\n", strnstr("abcdefgh", "abc", 2));
	printf("%s\n", ft_strnstr("abcdefgh", "abc", 2));


	printf("\nhaystack = \"abc\"  needle = \"abcdefgh\" len = 5\n"); 
	printf("%s\n", strnstr("abc", "abcdef", 5));
	printf("%s\n", ft_strnstr("abc", "abcdef", 5));


	printf("\nhaystack = \"\"  needle = \"\" len = 0\n"); 
	printf("%s\n", strnstr("","",0));
	printf("%s\n", ft_strnstr("","",0));

	//CAS DE SEGMENTATION FAULT

//	printf("%s\n", strnstr(((void *)0), n, 10));
//	printf("%s\n", ft_strnstr(((void *)0),n,10));


//	printf("%s\n", strnstr(h,((void *)0),10));
//	printf("%s\n", ft_strnstr(h,((void *)0),10));


	printf("%s\n", strnstr(((void *)0),((void *)0),10));
//	printf("%s\n", ft_strnstr(((void *)0),((void *)0),10));
	return (0);
}
