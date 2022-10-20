/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:42:38 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 12:59:25 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s = "Mariya est tres belle";
	memchr(s, 'b', 20);
	// une fois la fonction memchr appelee, elle ne modifie pas la chaine.Y
	printf("s = Mariya est tres belle  c = 'b'  n = 20  resultat:  %s\n", s);
	// Ici on peut lire la chaine a partir de la lettre souhaitee
	printf("s = Mariya est tres belle  c = 'b'  n = 20  resultat:  %p\n", memchr(s, 98, 19));
	printf("s = Mariya est tres belle  c = 'b'  n = 20  resultat:  %s\n", memchr(s, 98, 19));
	
	printf("\ns = Mariya est tres belle  c = 's'  n = 20  resultat:  %p\n", memchr(s, 's', 19));
	printf("s = Mariya est tres belle  c = 's'  n = 20  resultat:  %s\n", memchr(s, 's', 19));

	// continue la recherche meme apres un \0 rencontre
	char *s1 = "Mariya est\0 tres belle";
	printf("s = Mariya est\\0 tres belle  c = 'l'  n = 20  resultat:  %s\n", memchr(s1, 108, 20));

	// retourne un pointeur null
	printf("\ns = Mariya est tres belle  c = 'z'  n = 20  resultat:  %s\n", memchr(s, 'z', 19));
	
	// donne un seg fault
	printf("s = *void*)0  c = 's'  n = 20  resultat:  %p\n", memchr((void*)0, 's', 19));

	return (0);
}
