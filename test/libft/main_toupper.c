/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:19:07 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/26 18:06:01 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	printf("\nc = 128    toupper    = %c, %d\n",toupper(128), toupper(128));
	printf("c = 128    ft_toupper = %c, %d\n",ft_toupper(128), ft_toupper(128));
	printf("\nc = \'\\x80\'    toupper    = %c, %d\n",toupper('\x80'), toupper('\x80'));
	printf("c = \'\\x80\'    ft_toupper = %c, %d\n",ft_toupper('\x80'), ft_toupper('\x80'));
	printf("\nc = -97    toupper    = %c, %d\n",toupper(-97), toupper(-97));
	printf("c = -97    ft_toupper = %c, %d\n",ft_toupper(-97), ft_toupper(-97));
	printf("\nc = 97    toupper     = %c, %d\n",toupper(97), toupper(97));
	printf("c = 97    ft_toupper  = %c, %d\n",ft_toupper(97), ft_toupper(97));
	printf("\nc = 353   toupper     = %c, %d\n",toupper(353), toupper(353));
	printf("c = 353   ft_toupper  = %c, %d\n",ft_toupper(353), ft_toupper(353));
	printf("\nc = 65    toupper     = %c, %d\n",toupper(65), toupper(65));
	printf("c = 65    ft_toupper  = %c, %d\n",ft_toupper(65), ft_toupper(65));
	return (0);
}

