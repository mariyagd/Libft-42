/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:23:18 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/17 13:17:27 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char **ft_split(char const *s, char c);

size_t  ft_count_nbsubstr1(const char *s, char c)
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

int	main(void)
{
	char			*s;
	char			c;
	char			**substr;
	size_t			nb_substr;
	size_t			i;
	
	s = "**split*****this*for***me**!";
	c = '*';

	//TEST 1
	i = 0;
	nb_substr = ft_count_nbsubstr1(s, c);
	substr = ft_split(s, c);
	while (i < nb_substr)
	{
		printf("substr [%zu] = \"%s\"\n", i, substr[i]);
		i++;
	}

	//TEST 2
	char	*s1;
	char	c1;
	
	s1 = "*******";
	c1 = '*';
	i = 0;
	nb_substr = ft_count_nbsubstr1(s1, c1);
	substr = ft_split(s1, c1);
	while (i < nb_substr)
	{
		printf("substr [%zu] = \"%s\"\n", i, substr[i]);
		i++;
	}

	//TEST 3
	char	*s3;
	char	c3;
	
	s3 = "";
	c3 = '*';
	i = 0;
	nb_substr = ft_count_nbsubstr1(s3, c3);
	substr = ft_split(s3, c3);
	while (i < nb_substr)
	{
		printf("substr [%zu] = \"%s\"\n", i, substr[i]);
		i++;
	}
	
	//TEST 4
	char	*s4;
	char	c4;
	
	s4 = "Split this for me";
	c4 = '*';
	i = 0;
	nb_substr = ft_count_nbsubstr1(s4, c4);
	substr = ft_split(s4, c4);
	while (i < nb_substr)
	{
		printf("substr [%zu] = \"%s\"\n", i, substr[i]);
		i++;
	}
	return (0);
}

