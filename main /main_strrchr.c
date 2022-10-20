/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:20:42 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/19 22:18:26 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char str[7] = "mariya";

	printf("\n-------------FONCTION ORIGINALE STRRCHR---------------\n");
	printf("str = \"mariya\"   c = \'a\'    strrchr = %s\n", strrchr(str, 'a'));
	printf("str = \"mariya\"   c = \'z\'    strrchr = %s\n", strrchr(str, 'z'));
	printf("str = \"mariya\"   c = \'r\'    strrchr = %s\n", strrchr(str, 'r'));
	printf("str = \"mariya\"   c = \'\\0\'   strrchr = %s\n", strrchr(str, '\0'));
	printf("str = \"\"         c = \'z\'    strrchr = %s\n", strrchr("", 'z'));
	printf("str = \"\"         c = \'\\0\'   strrchr = %s\n", strrchr("", '\0'));
	printf("str = \"ababab\"   c = \'a\'    strrchr = %s\n", strrchr("ababab", 'a'));
	printf("str = \"ababab\"   c = \'b\'    strrchr = %s\n", strrchr("ababab", 'b'));
	printf("str = \"0ariya\"   c = \'0\'    strrchr = %s\n", strrchr(str, '0'));


	char ptr[7] = "mariya";

	printf("\n-------------MA FONCTION STRRCHR---------------\n");
	printf("str = \"mariya\"   c = \'a\'    strrchr = %s\n", ft_strrchr(ptr, 'a'));
	//printf("str = \"mariya\"   c = \'z\'    strrchr = %s\n", ft_strrchr(ptr, 'z'));
	printf("str = \"mariya\"   c = \'r\'    strrchr = %s\n", ft_strrchr(ptr, 'r'));
	printf("str = \"mariya\"   c = \'\\0\'   strrchr = %s\n", ft_strrchr(ptr, '\0'));
	printf("str = \"\"         c = \'z\'    strrchr = %s\n", ft_strrchr("", 'z'));
	printf("str = \"\"         c = \'\\0\'   strrchr = %s\n", ft_strrchr("", '\0'));
	printf("str = \"ababab\"   c = \'a\'    strrchr = %s\n", ft_strrchr("ababab", 'a'));
	printf("str = \"ababab\"   c = \'b\'    strrchr = %s\n", ft_strrchr("ababab", 'b'));
	printf("str = \"0ariya\"   c = \'0\'    strrchr = %s\n", ft_strrchr(ptr, '0'));
	return (0);
}

