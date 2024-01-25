/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:06:58 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:56:27 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	getchar();
/*	printf("%d\n", ft_printf("blala|"));
	printf("%d\n", printf("blala|"));


	printf("%d\n", ft_printf("%"));
	printf("%d\n", printf("%"));

	printf("%d\n", ft_printf("%5"));
	printf("%d\n", printf("%5"));

	printf("%d\n", ft_printf("%-05"));
	printf("%d\n", printf("%-05"));

	printf("%d\n", ft_printf(""));
	printf("%d\n", printf(""));

	printf("%d\n", ft_printf("%-5"));
	printf("%d\n", printf("%-5"));

//	TEST %
	
	printf("%d\n", ft_printf("%%"));
	printf("%d\n", printf("%%"));

	printf("%d\n", ft_printf("%5%"));
	printf("%d\n", printf("%5%"));

	printf("%d\n", ft_printf("%-5%"));
	printf("%d\n", printf("%-5%"));

	printf("%d\n", ft_printf("%05%"));
	printf("%d\n", printf("%05%"));

	printf("%d\n", ft_printf("%-05%"));
	printf("%d\n", printf("%-05%"));


//	TEST CHAR
	printf("%d\n", ft_printf("%c|", 'a'));
	printf("%d\n", printf("%c|", 'a'));
		
	printf("%d\n", ft_printf("%34c|", 'a'));
	printf("%d\n", printf("%34c|", 'a'));
	
	printf("%d\n", ft_printf("%23c|", 'a'));
	printf("%d\n", printf("%23c|", 'a'));		
	
	printf("%d\n", ft_printf("%*c|", -23, 'a'));
	printf("%d\n", printf("%*c|", -23, 'a'));

	printf("%d\n", ft_printf("%*c|", 23, 'a'));
	printf("%d\n", printf("%*c|", 23, 'a'));

	printf("%d\n", ft_printf("dw %*c jj %c|", 23, 'a', 90));
	printf("%d\n", printf("dw %*c jj %c|", 23, 'a',90));

	printf("%d\n", ft_printf("%%*c|", 23, 'a'));
	printf("%d\n", printf("%%*c|", 23, 'a'));

//	TEST STRING

	printf("%d\n", ft_printf("hello, %s.", "gavin"));
	printf("%d\n", printf("hello, %s.", "gavin"));

	printf("%d\n", ft_printf("%s", "testing testing"));
	printf("%d\n", printf("%s", "testing testing"));

	printf("%d\n", ft_printf("%s%s", "hello", "world"));
	printf("%d\n", printf("%s%s", "hello", "world"));
	
	printf("%d\n", ft_printf("..%s stuff %s", "a", "b"));
	printf("%d\n", printf("..%s stuff %s", "a", "b"));
	
	printf("%d\n", ft_printf("%7.5s", "bombastic"));
	printf("%d\n", printf("%7.5s", "bombastic"));
	
	printf("%d\n", ft_printf("%-7.5s", "yolo"));
	printf("%d\n", printf("%-7.5s", "yolo"));
	
	printf("%d\n", ft_printf("7.5s", "tubular"));
	printf("%d\n", printf("7.5s", "tubular"));
	
	printf("%d\n", ft_printf("7.7s%7.7s", "hello", "world"));
	printf("%d\n", printf("7.7s%7.7s", "hello", "world"));

	printf("%d\n", ft_printf("%3.7s%7.7s", "hello", "world"));
	printf("%d\n", printf("%3.7s%7.7s", "hello", "world"));
	
	printf("%d\n", ft_printf("%7.7s%3.7s", "hello", "world"));
	printf("%d\n", printf("%7.7s%3.7s", "hello", "world"));
	
	printf("%d\n", ft_printf("%3.7s%3.7s", "hello", "world"));
	printf("%d\n", printf("%3.7s%3.7s", "hello", "world"));
	
	printf("%d\n", ft_printf("%7.3s%7.7s", "hello", "world"));
	printf("%d\n", printf("%7.3s%7.7s", "hello", "world"));
	
	printf("%d\n", ft_printf("%3.3s%7.7s", "hello", "world"));
	printf("%d\n", printf("%3.3s%7.7s", "hello", "world"));
	
	printf("%d\n", ft_printf("%7.3s%3.7s", "hello", "world"));
	printf("%d\n", printf("%7.3s%3.7s", "hello", "world"));

	printf("%d\n", ft_printf("%3.3s%3.7s", "hello", "world"));
	printf("%d\n", printf("%3.3s%3.7s", "hello", "world"));

	printf("%d\n", ft_printf("%7.7s%7.3s", "hello", "world"));
	printf("%d\n", printf("%7.7s%7.3s", "hello", "world"));

	printf("%d\n", ft_printf("%3.7s%7.3s", "hello", "world"));
	printf("%d\n", printf("%3.7s%7.3s", "hello", "world"));

	printf("%d\n", ft_printf("%7.7s%3.3s", "hello", "world"));
	printf("%d\n", printf("%7.7s%3.3s", "hello", "world"));	

	printf("%d\n", ft_printf("%3.7s%3.3s", "hello", "world"));
	printf("%d\n", printf("%3.7s%3.3s", "hello", "world"));	
	
	printf("%d\n", ft_printf("%7.3s%7.3s", "hello", "world"));
	printf("%d\n", printf("%7.3s%7.3s", "hello", "world"));	
	
	printf("%d\n", ft_printf("%3.3s%7.3s", "hello", "world"));
	printf("%d\n", printf("%3.3s%7.3s", "hello", "world"));	
	
	printf("%d\n", ft_printf("%7.3s%3.3s", "hello", "world"));
	printf("%d\n", printf("%7.3s%3.3s", "hello", "world"));	
	
	printf("%d\n", ft_printf("%3.3s%3.3s", "hello", "world"));
	printf("%d\n", printf("%3.3s%3.3s", "hello", "world"));	
	
	printf("%d\n", ft_printf("%3s%3s", "hello", "world"));
	printf("%d\n", printf("%3s%3s", "hello", "world"));	
	
	printf("%d\n", ft_printf("%-7s%5s", "hello", "world"));
	printf("%d\n", printf("%-7s%5s", "hello", "world"));	
	
	printf("%d\n", ft_printf("%7s%-5s", "hello", "world"));
	printf("%d\n", printf("%7s%-5s", "hello", "world"));	
	
	printf("%d\n", ft_printf("hello, %s.", NULL));
	printf("%d\n", printf("hello, %s.", NULL));	
	
	printf("%d\n", ft_printf("%s", NULL));
	printf("%d\n", printf("%s", NULL));	
	
	printf("%d\n", ft_printf("%32s", NULL));
	printf("%d\n", printf("%32s", NULL));	
	
	printf("%d\n", ft_printf("%2s", NULL));
	printf("%d\n", printf("%2s", NULL));	
	
	printf("%d\n", ft_printf("%-32s", NULL));
	printf("%d\n", printf("%-32s", NULL));	
	
	printf("%d\n", ft_printf("%-16s", NULL));
	printf("%d\n", printf("%-16s", NULL));	
	
	printf("%d\n", ft_printf("%.9s", "NULL"));
	printf("%d\n", printf("%.9s", "NULL"));	
	
	printf("%d\n", ft_printf("%.0s", "NULL"));
	printf("%d\n", printf("%.0s", "NULL"));	

static char *s_hidden = "hi low\0don't print me lol\0";

	printf("%d\n", ft_printf("%s", s_hidden));
	printf("%d\n", printf("%s", s_hidden));	
	
	printf("%d\n", ft_printf("%3s", s_hidden));
	printf("%d\n", printf("%3s", s_hidden));	
	
	printf("%d\n", ft_printf("%.s", s_hidden));
	printf("%d\n", printf("%.s", s_hidden));	
	
	printf("%d\n", ft_printf("%.03s", s_hidden));
	printf("%d\n", printf("%.03s", s_hidden));	
	
	printf("%d\n", ft_printf("%.00s", "\0"));
	printf("%d\n", printf("%.00s", "\0"));	
	
	printf("%d\n", ft_printf("%3.s", s_hidden));
	printf("%d\n", printf("%3.s", s_hidden));	
	
	printf("%d\n", ft_printf("%-3.s", s_hidden));
	printf("%d\n", printf("%-3.s", s_hidden));	
	
	printf("%d\n", ft_printf("%-1.s", "\0"));
	printf("%d\n", printf("%-1.s", "\0"));	
	
	printf("%d\n", ft_printf("%-10.1s", s_hidden));
	printf("%d\n", printf("%-10.1s", s_hidden));	
	
	printf("%d\n", ft_printf("%20.6s", s_hidden));
	printf("%d\n", printf("%20.6s", s_hidden));	
	
	printf("%d\n", ft_printf("%-10.8s", NULL));
	printf("%d\n", printf("%-10.8s", NULL));	
	
	printf("%d\n", ft_printf("%-.09s", s_hidden));
	printf("%d\n", printf("%-.09s", s_hidden));	
	
	printf("%d\n", ft_printf("%.09s", "\0"));
	printf("%d\n", printf("%.09s", "\0"));	
	
	printf("%d\n", ft_printf("%1.s", "\0"));
	printf("%d\n", printf("%1.s", "\0"));	
	
	printf("%d\n", ft_printf("%-8.s", NULL));
	printf("%d\n", printf("%-8.s", NULL));	
	
	printf("%d\n", ft_printf("%3.1s", s_hidden));
	printf("%d\n", printf("%3.1s", s_hidden));	
	
	printf("%d\n", ft_printf("%20.6s", NULL));
	printf("%d\n", printf("%20.6s", NULL));	
	
	printf("%d\n", ft_printf("%-10.8s", s_hidden));
	printf("%d\n", printf("%-10.8s", s_hidden));	

	printf("%d\n", ft_printf("%0000s", s_hidden));
	printf("%d\n", printf("%0000s", s_hidden));	
	
	printf("%d\n", ft_printf("%00-s", s_hidden));
	printf("%d\n", printf("%00-s", s_hidden));	

//	TEST INTEGER

	printf("%d\n", ft_printf("this %i number", 17));
	printf("%d\n", printf("this %i number", 17));	

	printf("%d\n", ft_printf("this %i number", -267));
	printf("%d\n", printf("this %i number", -267));	
	
	printf("%d\n", ft_printf("this %d number", 0));
	printf("%d\n", printf("this %d number", 0));	
	
	printf("%d\n", ft_printf("%i",  2147483647));
	printf("%d\n", printf("%i",  2147483647));	

	printf("%d\n", ft_printf("%i", (int)(-2147483678)));
	printf("%d\n", printf("%i", (int)(-2147483678)));	
	
	printf("%d\n", ft_printf("%4i", 94827));
	printf("%d\n", printf("%4i", 94827));	
	
	printf("%d\n", ft_printf("%.4i", 5263));
	printf("%d\n", printf("%.4i", 5263));	

	printf("%d\n", ft_printf("%03i", 634));
	printf("%d\n", printf("%03i", 634));	
	
	printf("%d\n", ft_printf("%8.3i", -847));
	printf("%d\n", printf("%8.3i", -847));	
	
	printf("%d\n", ft_printf("%-3.7i", -2375));
	printf("%d\n", printf("%-3.7i", -2375));	

	printf("%d\n", ft_printf("%03.7i", 3267));
	printf("%d\n", printf("%03.7i", 3267));	
	
	printf("%d\n", ft_printf("%0-3.7i", 3267));
	printf("%d\n", printf("%0-3.7i", 3267));	
*/
static int			i_pos_1 = 878023;

	printf("%d\n", ft_printf("%.0i", 0));
	printf("%d\n", printf("%.0i", 0));	


	printf("%d\n", ft_printf("%5.i", 0));
	printf("%d\n", printf("%5.i", 0));

	printf("%d\n", ft_printf("this %d number", -267));
	printf("%d\n", printf("this %d number", -267));
	
	printf("%d\n", ft_printf("%d", -1));
	printf("%d\n", printf("%d", -1));

	printf("%d\n", ft_printf("%5d", -2562));
	printf("%d\n", printf("%5d", -2562));
	
	printf("%d\n", ft_printf("%-7d", 33));
	printf("%d\n", printf("%-7d", 33));
	
	printf("%d\n", ft_printf("%-5d", 52625));
	printf("%d\n", printf("%-5d", 52625));

	printf("%d\n", ft_printf("%.5d", 2));
	printf("%d\n", printf("%.5d", 2));
	
	printf("%d\n", ft_printf("%.3d", 13862));
	printf("%d\n", printf("%.3d", 13862));
	
	printf("%d\n", ft_printf("%03d", 0));
	printf("%d\n", printf("%03d", 0));
	
	printf("%d\n", ft_printf("%3.7d", -2375));
	printf("%d\n", printf("%3.7d", -2375));

	printf("%d\n", ft_printf("%-8.3d", 8375));
	printf("%d\n", printf("%-8.3d", 8375));
	
	printf("%d\n", ft_printf("%-8.3d", -8473));
	printf("%d\n", printf("%-8.3d", -8473));	
/*	
	printf("%d\n", ft_printf());
	printf("%d\n", printf());		
*/
	sleep(30);
	return (0);
}
