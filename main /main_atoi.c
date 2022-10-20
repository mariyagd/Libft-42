/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:47:36 by mdanchev          #+#    #+#             */
/*   Updated: 2022/10/20 14:31:55 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	printf("\nstr = \"   +1234\"          atoi    = %d\n", atoi("   +1234"));
	printf("str = \"    +1234\"          ft_atoi = %d\n", ft_atoi("   +1234"));
	printf("\nstr = \"+654aB55\"       atoi    = %d\n", atoi("+654aB55"));
	printf("str = \"+654aB55\"       ft_atoi = %d\n", ft_atoi("+654aB55"));
	printf("\nstr = \"-654aB55\"       atoi    = %d\n", atoi("-654aB55"));
	printf("str = \"-654aB55\"       ft_atoi = %d\n", ft_atoi("-654aB55"));
	printf("\nstr = \"-+654aB55\"      atoi    = %d\n", atoi("-+654aB55"));
	printf("str = \"-+654aB55\"      ft_atoi = %d\n", ft_atoi("-+654aB55"));
	printf("\nstr = \"+-654aB55\"      atoi    = %d\n", atoi("+-654aB55"));
	printf("str = \"+-654aB55\"      ft_atoi = %d\n", ft_atoi("+-654aB55"));
	printf("\nstr = \"++654aB55\"      atoi    = %d\n", atoi("++654aB55"));
	printf("str = \"++654aB55\"      ft_atoi = %d\n", ft_atoi("++654aB55"));
	printf("\nstr = \"--654aB55\"      atoi    = %d\n", atoi("--654aB55"));
	printf("str = \"--654aB55\"      ft_atoi = %d\n", ft_atoi("--654aB55"));
	printf("\nstr = \"654aB55\"        atoi    = %d\n", atoi("654aB55"));
	printf("str = \"654aB55\"        ft_atoi = %d\n", ft_atoi("654aB55"));
	printf("\nstr = \" 654aB55\"       atoi    = %d\n", atoi(" 654aB55"));
	printf("str = \" 654aB55\"       ft_atoi = %d\n", ft_atoi(" 654aB55"));
	printf("\nstr = \"  654aB55\"      atoi    = %d\n", atoi("   654aB55"));
	printf("str = \"  654aB55\"      ft_atoi = %d\n", ft_atoi("  654aB55"));
	printf("\nstr = \"  0654aB55\"      atoi    = %d\n", atoi("   0654aB55"));
	printf("str = \"  0654aB55\"      ft_atoi = %d\n", ft_atoi("  0654aB55"));
	printf("\nstr = \"  000654aB55\"      atoi    = %d\n", atoi("   000654aB55"));
	printf("str = \"  000654aB55\"      ft_atoi = %d\n", ft_atoi("  000654aB55"));
	printf("\nstr = \"  +000654aB55\"     atoi    = %d\n", atoi("   +000654aB55"));
	printf("str = \"  +0000654aB55\"     ft_atoi = %d\n", ft_atoi("  +000654aB55"));
	
	printf("\nstr = \"  000-654aB55\"     atoi    = %d\n", atoi("   000-654aB55"));
	printf("str = \"  000-654aB55\"     ft_atoi = %d\n", ft_atoi("  000-654aB55"));
	
	printf("\nstr = \"  000+654aB55\"     atoi    = %d\n", atoi("   000+654aB55"));
	printf("str = \"  000+654aB55\"     ft_atoi = %d\n", ft_atoi("  000+654aB55"));


	// CAS DE SEGFAULT
//	printf("\nstr = NULL       atoi    = %d\n", atoi(((void *)0)));
//	printf("str = NULL       ft_atoi = %d\n", ft_atoi(((void *)0)));

	printf("\nstr = \"  0654aB55\"      atoi    = %d\n", atoi("   0654aB55"));
	printf("str = \"  0654aB55\"      ft_atoi = %d\n", ft_atoi("  0654aB55"));
	printf("\nstr = \"  0000654aB55\"            atoi    = %d\n", atoi("   0000654aB55"));
	printf("str = \"  0000654aB55\"            ft_atoi = %d\n", ft_atoi("  0000654aB55"));
	printf("\nstr = \" \\t\\v\\n\\r\\f0654aB55\"       atoi    = %d\n", atoi("   \t\v\n\r\f0654aB55"));
	printf("str = \"  \\t\\v\\n\\r\\f0654aB55\"      ft_atoi = %d\n", ft_atoi("  \t\v\n\r\f0654aB55"));

/*	printf("\nMAX unsigned int\n");
	printf("str = \"4294967295\"                      atoi    = %d\n", atoi("4294967295"));
	printf("str = \"4294967295\"                      ft_atoi = %d\n", ft_atoi("4294967295"));

	printf("\nMAX_INT\n");
	printf("str = \"   2147483647ab\"                  atoi    = %d\n", atoi("   2147483647ab"));
	printf("str = \"   2147483647ab\"                  ft_atoi = %d\n", ft_atoi("   2147483647ab"));

	printf("\nMIN_INT\n");
	printf("str = \"    -2147483648ab\"                 atoi    = %d\n", atoi("    -2147483648ab"));
	printf("str = \"    -2147483648ab\"                 ft_atoi = %d\n", ft_atoi("    -2147483648ab"));

	printf("\nau dela de MIN_INT");
	printf("\nstr = \"  -21474836499\"                  atoi    = %d\n", atoi("  -21474836499"));
	printf("str = \"  -21474836499\"                  ft_atoi = %d\n", ft_atoi("  -21474836499"));

	printf("\nstr = \"  -451474836499\"                 atoi    = %d\n", atoi("  -451474836499"));
	printf("str = \"  -451474836499\"                 ft_atoi = %d\n", ft_atoi("  -451474836499"));
	
	printf("\nstr = \"-99999999999999999999999999\"     atoi    = %d\n", atoi("-99999999999999999999999999"));
	printf("str = \"-99999999999999999999999999\"     ft_atoi = %d\n", ft_atoi("-99999999999999999999999999"));
	
	printf("\nau dela de MAX_INT");
	printf("\nstr = \"  21474836499\"                   atoi    = %d\n", atoi("  21474836499"));
	printf("str = \"  21474836499\"                   ft_atoi = %d\n", ft_atoi("  21474836499"));

	printf("\nstr = \"  451474836499\"                  atoi    = %d\n", atoi("  451474836499"));
	printf("str = \"  451474836499\"                  ft_atoi = %d\n", ft_atoi("  451474836499"));


	printf("\nMAX LONG LONG\n");
	printf("str = \"+9223372036854775807\"            atoi    = %d\n", atoi("+9223372036854775807"));
	printf("str = \"+9223372036854775807\"            ft_atoi = %d\n", ft_atoi("+9223372036854775807"));

	printf("\nstr = \"+922337203685477580\"             atoi    = %d\n", atoi("+922337203685477580"));
	printf("str = \"+922337203685477580\"             ft_atoi = %d\n", ft_atoi("+922337203685477580"));

	printf("\nstr = \"+9223372036854775890\"            atoi    = %d\n", atoi("+9223372036854775890"));
	printf("str = \"+9223372036854775890\"            ft_atoi = %d\n", ft_atoi("+9223372036854775890"));
	
	printf("\nMIN LONG LONG\n");
	printf("str = \"−9223372036854775807\"            atoi    = %d\n", atoi("−9223372036854775807"));
	printf("str = \"−9223372036854775807\"            ft_atoi = %d\n", ft_atoi("−9223372036854775807"));
	
	printf("\nstr = \"−922337203685477580\"             atoi    = %d\n", atoi("−922337203685477580"));
	printf("str = \"−922337203685477580\"             ft_atoi = %d\n", ft_atoi("−922337203685477580"));

	printf("\nstr = \"−9223372036854775890\"            atoi    = %d\n", atoi("−9223372036854775890"));
	printf("str = \"−9223372036854775890\"            ft_atoi = %d\n", ft_atoi("−9223372036854775890"));
	
	printf("\nstr = \"99999999999999999999999999\"      atoi    = %d\n", atoi("99999999999999999999999999"));
	printf("str = \"99999999999999999999999999\"      ft_atoi = %d\n", ft_atoi("99999999999999999999999999"));*/
	return (0);

}
