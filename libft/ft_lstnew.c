/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:07:45 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 18:30:27 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	lstnew;	
	lstnew = (t_list *)malloc(sizeof(t_list))
	lstnew.next = NULL;
	lstnew.content = (void *)content;
	return (lstnew);
}

