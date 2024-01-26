/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:06:58 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/26 14:41:53 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char c = 'A';
	char *s = "Ecole 42";
	void *p = &c;
	int d = 42;
	unsigned int u = INT_MAX + 1023813432;
	unsigned int x = 0x2a;
	unsigned int X = 0x2A;

	// CHAR
	printf("\n--- Test with char (%%c) ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%c'\n", c);
	printf("\033[34mprintf:\033[0m    '%c'\n", c);

	// STRING
	printf("\n--- Test with string (%%s) ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%s'\n", s);
	printf("\033[34mprintf:\033[0m    '%s'\n", s);
	printf("\n\t- NULL -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%s'\n", NULL);
	printf("\033[34m\tprintf:\033[0m    '%s'\n", NULL);

	// PTR
	printf("\n--- Test with pointer (%%p) ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%p'\n", p);
	printf("\033[34mprintf:\033[0m    '%p'\n", p);
	printf("\n\t- NULL -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%p'\n", 0);
	printf("\033[34m\tprintf:\033[0m    '%p'\n", 0);

	// INT
	printf("\n--- Test with decimals (%%d and %%i) ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%d' '%i'\n", d, d);
	printf("\033[34mprintf:\033[0m    '%d' '%i'\n", d, d);
	printf("\n\t- Int min -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%d' '%i'\n", INT_MIN, INT_MIN);
	printf("\033[34m\tprintf:\033[0m    '%d' '%i'\n", INT_MIN, INT_MIN);
	printf("\n\t- Int max -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%d' '%i'\n", INT_MAX, INT_MAX);
	printf("\033[34m\tprintf:\033[0m    '%d' '%i'\n", INT_MAX, INT_MAX);
	printf("\n\t- Int max + 10 -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%d' '%i'\n", INT_MAX + 10, INT_MAX + 10);
	printf("\033[34m\tprintf:\033[0m    '%d' '%i'\n", INT_MAX + 10, INT_MAX + 10);

	// UINT
	printf("\n--- Test with unsigned int (%%u) ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%u'\n", u);
	printf("\033[34mprintf:\033[0m    '%u'\n", u);
	printf("\n\t- UINT min -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%u'\n", 0);
	printf("\033[34m\tprintf:\033[0m    '%u'\n", 0);
	printf("\n\t- UINT max -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%u'\n", UINT_MAX);
	printf("\033[34m\tprintf:\033[0m    '%u'\n", UINT_MAX);
	printf("\n\t- UINT max + 10 -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%u'\n", UINT_MAX + 10);
	printf("\033[34m\tprintf:\033[0m    '%u'\n", UINT_MAX + 10);

	// HEX
	printf("\n--- Test with hexadecimals (%%x et %%X) ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%x' '%X'\n", x, X);
	printf("\033[34mprintf:\033[0m    '%x' '%X'\n", x, X);
	printf("\n\t- UINT min -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%x' '%X'\n", 0, 0);
	printf("\033[34m\tprintf:\033[0m    '%x' '%X'\n", 0, 0);
	printf("\n\t- UINT max -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%x' '%X'\n", UINT_MAX, UINT_MAX);
	printf("\033[34m\tprintf:\033[0m    '%x' '%X'\n", UINT_MAX, UINT_MAX);
	printf("\n\t- UINT max + 10 -\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%x' '%X'\n", UINT_MAX + 10, UINT_MAX + 10);
	printf("\033[34m\tprintf:\033[0m    '%x' '%X'\n", UINT_MAX + 10, UINT_MAX + 10);

	// %
	printf("\n--- Test with percent char (%%) ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%%'\n");
	printf("\033[34mprintf:\033[0m    '%%'\n");

	// FLAGS & WIDTH
	printf("\n--- Tests with flags width and precision ---\n");
	ft_printf("\033[32mft_printf:\033[0m '%-10c' '%#x' '%+d' '% s' '%.5s' '%05d'\n", c, x, d, s, s, d);
	printf("\033[34mprintf:\033[0m    '%-10c' '%#x' '%+d' '% s' '%.5s' '%05d'\n", c, x, d, s, s, d);

	return (0);
}
