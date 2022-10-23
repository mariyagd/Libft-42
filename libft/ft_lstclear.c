/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:16:06 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/23 17:29:31 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*temp;

	ptr = NULL;
	ptr = *lst;
	if (!del)
		return ;
	while (ptr != NULL && ptr->next != NULL)
	{
		ptr = ptr->next;
		temp = ptr;
		del(ptr->content);
		free(ptr);
	}
	*lst = NULL;
}
