/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:48:29 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/24 13:52:19 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*maillon0;
	t_list	*maillon1;
	t_list	*maillon2;
	t_list	*maillon3;
	char	*str0 = ":)";
	char	*str1 = "ca va? ";
	char	*str2 = "comment ";
	char	*str3 = "Bonjour, ";
	
	maillon0 = ft_lstnew(str0);
	maillon1 = ft_lstnew(str1);
	maillon2 = ft_lstnew(str2);
	maillon3 = ft_lstnew(str3);
	
	printf("\n-------------CREATION DE CHAQUE MAILLON-------------\n");
	printf("\nadresse maillon0 = %p, maillon0->content = %s,        maillon0->next = %p\n", maillon0, maillon0->content, maillon0->next);
	printf("adresse maillon1 = %p, maillon1->content = %s,   maillon1->next = %p\n", maillon1, maillon1->content, maillon1->next);
	printf("adresse maillon2 = %p, maillon2->content = %s,  maillon2->next = %p\n", maillon2, maillon2->content, maillon2->next);
	printf("adresse maillon3 = %p, maillon3->content = %s, maillon3->next = %p\n", maillon3, maillon3->content, maillon3->next);
	
	
	printf("\n-------------LINKAGE ENTRE LES MAILLONS-------------\n");
	
	ft_lstadd_front(&maillon0, maillon1);
	printf("\nft_lstadd_front(&maillon0, maillon1)");
   	printf("\nadresse maillon0 = %p, maillon0->content = \"%s\",        maillon0->next = %p  ", maillon0, maillon1->next->content, maillon0->next);
   	printf("\nadresse maillon1 = %p, maillon1->content = \"%s\",   maillon1->next = %p  ", maillon1, maillon1->content, maillon1);
	printf("\n");
	
	ft_lstadd_front(&maillon1, maillon2);
	printf("\nft_lstadd_front(&maillon1, maillon2)");
   	printf("\nadresse maillon0 = %p, maillon0->content = \"%s\",        maillon0->next = %p  ", maillon0, maillon2->next->next->content, maillon0->next);
   	printf("\nadresse maillon1 = %p, maillon1->content = \"%s\",   maillon1->next = %p  ", maillon1, maillon2->next->content, maillon1->next);
   	printf("\nadresse maillon2 = %p, maillon2->content = \"%s\",  maillon2->next = %p  ", maillon2, maillon2->content, maillon2);
	printf("\n");
	
	ft_lstadd_front(&maillon2, maillon3);
	printf("\nft_lstadd_front(&maillon2, maillon3)");
   	printf("\nadresse maillon0 = %p, maillon0->content = \"%s\",          maillon0->next = %p  ", maillon0, maillon3->next->next->next->content, maillon0->next);
   	printf("\nadresse maillon1 = %p, maillon1->content = \"%s\",     maillon1->next = %p  ", maillon1, maillon3->next->next->content, maillon1->next);
   	printf("\nadresse maillon2 = %p, maillon2->content = \"%s\",    maillon2->next = %p  ", maillon2, maillon2->next->content, maillon2->next);
   	printf("\nadresse maillon3 = %p, maillon3->content = \"%s\",   maillon3->next = %p  ", maillon3, maillon3->content, maillon3);
	return(0);
}	


