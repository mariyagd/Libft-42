/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:03:53 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/17 21:03:54 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char) c <= 'Z')
		return (1);
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (1);
	else
		return (0);
}
