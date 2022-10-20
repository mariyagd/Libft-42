/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:19:07 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 12:31:46 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	printf("\nc = 128 est en dehors du tableau ascii\n");	
	printf("c = 128    toupper    = %c, %d\n",toupper(128), toupper(128));
	printf("c = 128    ft_toupper = %c, %d\n",ft_toupper(128), ft_toupper(128));
	
	printf("\nc = 128 est decimal \\x80 est en dehors du tableau ascii\n");	
	printf("c = \'\\x80\'    toupper    = %c, %d\n",toupper('\x80'), toupper('\x80'));
	printf("c = \'\\x80\'    ft_toupper = %c, %d\n",ft_toupper('\x80'), ft_toupper('\x80'));
	
	printf("\nc = -97, valeur negative ( 97 = \'a\')\n");	
	printf("c = -97    toupper    = %c, %d\n",toupper(-97), toupper(-97));
	printf("c = -97    ft_toupper = %c, %d\n",ft_toupper(-97), ft_toupper(-97));
	
	printf("\nc = 97 = \'a\')\n");	
	printf("c = 97    toupper     = %c, %d\n",toupper(97), toupper(97));
	printf("c = 97    ft_toupper  = %c, %d\n",ft_toupper(97), ft_toupper(97));

	printf("\n353 %% 256 = 97 = \'a\'\n");	
	int c = 353;
	printf("CAS cast en char %c, %d\n", (char)c, (char)c);	
	printf("CAS pas de cast  %c, %d\n", c, c);	
	printf("c = 353   toupper     = %c, %d\n",toupper(353), toupper(353));
	printf("c = 353   ft_toupper  = %c, %d\n",ft_toupper(353), ft_toupper(353));
	
	printf("\n357 %% 256 = 101 = \'e\'\n");	
	printf("c = 357   toupper     = %c, %d\n",toupper(357), toupper(357));
	printf("c = 357   ft_toupper  = %c, %d\n",ft_toupper(357), ft_toupper(357));
	
	printf("\nc = 65 = \'A\')\n");	
	printf("c = 65    toupper     = %c, %d\n",toupper(65), toupper(65));
	printf("c = 65    ft_toupper  = %c, %d\n",ft_toupper(65), ft_toupper(65));
	return (0);
}

