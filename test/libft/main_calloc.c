/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:21:01 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/27 11:19:49 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	printf("%p\n", calloc(10,10));
	printf("%p\n", ft_calloc(10,10));


	printf("%p\n", calloc(0,10));
	printf("%p\n", ft_calloc(0,10));
	return (0);
}

