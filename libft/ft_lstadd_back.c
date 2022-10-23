/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:05:06 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/23 16:22:37 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstlast;

	if (*lst == NULL)
		*lst = new;
	else if (!lst || !new)
		return ;
	else
	{
		lstlast = ft_lstlast(*lst);
		lstlast->next = new;
	}
}
