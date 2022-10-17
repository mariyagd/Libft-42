/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:23:18 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/17 12:49:46 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//char **ft_split(char const *s, char c);

size_t  ft_count_nbsubstr(const char *s, char c)
{
    unsigned int    i;
    size_t          count;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            while (s[i] != c && s[i] != '\0')
                i++;
            count++;
        }
        while (s[i] == c)
            i++;
    }
    return (count);
}


unsigned int    ft_start_index_substr(char const *s, char c, unsigned int start)
{
    while(s[start] == c && s[start] != '\0')
        start++;
    return (start);
}


unsigned int    ft_nb_char_substr(char const *s, char c, unsigned int start)
{
    unsigned int nb_char_substr;

    nb_char_substr = 0;
    while(s[start] != c && s[start] != '\0')
    {
        start++;
        nb_char_substr++;
    }
    return (nb_char_substr);
}

size_t  ft_strlen(const char *s);

int	main(void)
{
	char			*s;
	char			c;
	size_t			nb_substr;
	size_t			i;
	unsigned int	start;
	unsigned int	nb_char_substr;
	
	s = "**split*****this*for* me*!";
	c = '*';
	start = 0;
	i = 0;
	nb_substr = ft_count_nbsubstr(s, c);
	printf("nb substr = %zu\n", nb_substr);

	while (start < ((unsigned int)ft_strlen(s)) && i < nb_substr)
	{
		start = ft_start_index_substr(s, c, start);
		printf("substr %zu index debut: %d\n", i, start);
		nb_char_substr = ft_nb_char_substr(s, c, start);
		printf("substr %zu nb char:     %d\n", i, nb_char_substr);
		start = start + nb_char_substr;
		printf("substr %zu new index:   %d\n", i, start);
		i++;
	}
	return (0);
}

