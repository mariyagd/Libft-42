/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:35:17 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/26 19:20:26 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char *str = "mariya";
	char *str1 = "moriya";
	printf("\n----------------FONCTION ORIGINALE STRCHR---------------\n");
	printf("str = \"mariya\"   c = \'y\'   strchr =  %s\n", strchr(str, 'y'));
	printf("str = \"teste\"    c = 357   strchr =  %s\n", strchr(str, 357));
	printf("str = \"mariya\"   c = 'm'   strchr =  %s\n", strchr(str, 'm'));
	printf("str = \"mariya\"   c = \'\\0\'  strchr =  %s\n", strchr(str, '\0'));
	printf("str = \"moriya\"   c = \'a\'   strchr =  %s\n", strchr(str1, 'a'));
	//pointeur null
	printf("str = \"mariya\"   c = \'z\'   strchr =  %s\n", strchr(str, 'z'));
	printf("str = \"\"         c = \'z\'   strchr =  %s\n", strchr("", 'z'));
	//segmentation fault
//	printf("str = ((void*)0)   c = \'z\'   strchr =  %s\n", strchr(((void*)0), 'z'));


	char *ptr = "mariya";
	printf("\n----------------MA FONCTION STRCHR---------------\n");
	char *ptr1 = "moriya";
	printf("str = \"mariya\"   c = \'y\'   strchr =  %s\n", ft_strchr(ptr, 'y'));
	printf("str = \"teste\"    c = 357   strchr =  %s\n", ft_strchr(ptr, 357));
	printf("str = \"mariya\"   c = 'm'   strchr =  %s\n", ft_strchr(ptr, 'm'));
	printf("str = \"mariya\"   c = \'\\0\'  strchr =  %s\n", ft_strchr(ptr, '\0'));
	printf("str = \"moriya\"   c = \'a\'   strchr =  %s\n", ft_strchr(ptr1, 'a'));
	//pointeur null
	printf("str = \"mariya\"   c = \'z\'   strchr =  %s\n", ft_strchr(ptr, 'z'));
	printf("str = \"\"         c = \'z\'   strchr =  %s\n", ft_strchr("", 'z'));
	//segmentation fault
//	printf("str = ((void*)0)   c = \'z\'   strchr =  %s\n", ft_strchr(((void*)0), 'z'));
	return(0);
}
