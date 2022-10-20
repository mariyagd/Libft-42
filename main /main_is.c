/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:03:08 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/17 23:07:53 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("isalnum (65) = %d\n", isalnum(65));
	printf("isalnum (321) = %d\n", isalnum(321));
	printf("isalnum (266) = %d\n", isalnum(266));

	printf("\nisprint(65) = %d\n", isprint(65));
	printf("isprint(321) = %d\n", isprint(321));

	printf("\nisascii(127) = %d\n", isascii(127));
	printf("isascii(321) = %d\n", isascii(321));
	return (0);
}

