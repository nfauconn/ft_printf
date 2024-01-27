/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:06:58 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/26 14:49:30 by nfauconn         ###   ########.fr       */
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
	printf("\033[90m\n--- Test with char (%%c) ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%c'\n", c);
	printf("\033[34mprintf:\033[0m    '%c'\n", c);

	// STRING
	printf("\033[90m\n--- Test with string (%%s) ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%s'\n", s);
	printf("\033[34mprintf:\033[0m    '%s'\n", s);
	printf("\033[90m\n\t- NULL -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%s'\n", NULL);
	printf("\033[34m\tprintf:\033[0m    '%s'\n", NULL);

	// PTR
	printf("\033[90m\n--- Test with pointer (%%p) ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%p'\n", p);
	printf("\033[34mprintf:\033[0m    '%p'\n", p);
	printf("\033[90m\n\t- NULL -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%p'\n", 0);
	printf("\033[34m\tprintf:\033[0m    '%p'\n", 0);

	// INT
	printf("\033[90m\n--- Test with decimals (%%d and %%i) ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%d' '%i'\n", d, d);
	printf("\033[34mprintf:\033[0m    '%d' '%i'\n", d, d);
	printf("\033[90m\n\t- Int min -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%d' '%i'\n", INT_MIN, INT_MIN);
	printf("\033[34m\tprintf:\033[0m    '%d' '%i'\n", INT_MIN, INT_MIN);
	printf("\033[90m\n\t- Int max -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%d' '%i'\n", INT_MAX, INT_MAX);
	printf("\033[34m\tprintf:\033[0m    '%d' '%i'\n", INT_MAX, INT_MAX);
	printf("\033[90m\n\t- Int max + 10 -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%d' '%i'\n", INT_MAX + 10, INT_MAX + 10);
	printf("\033[34m\tprintf:\033[0m    '%d' '%i'\n", INT_MAX + 10, INT_MAX + 10);

	// UINT
	printf("\033[90m\n--- Test with unsigned int (%%u) ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%u'\n", u);
	printf("\033[34mprintf:\033[0m    '%u'\n", u);
	printf("\033[90m\n\t- UINT min -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%u'\n", 0);
	printf("\033[34m\tprintf:\033[0m    '%u'\n", 0);
	printf("\033[90m\n\t- UINT max -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%u'\n", UINT_MAX);
	printf("\033[34m\tprintf:\033[0m    '%u'\n", UINT_MAX);
	printf("\033[90m\n\t- UINT max + 10 -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%u'\n", UINT_MAX + 10);
	printf("\033[34m\tprintf:\033[0m    '%u'\n", UINT_MAX + 10);

	// HEX
	printf("\033[90m\n--- Test with hexadecimals (%%x et %%X) ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%x' '%X'\n", x, X);
	printf("\033[34mprintf:\033[0m    '%x' '%X'\n", x, X);
	printf("\033[90m\n\t- UINT min -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%x' '%X'\n", 0, 0);
	printf("\033[34m\tprintf:\033[0m    '%x' '%X'\n", 0, 0);
	printf("\033[90m\n\t- UINT max -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%x' '%X'\n", UINT_MAX, UINT_MAX);
	printf("\033[34m\tprintf:\033[0m    '%x' '%X'\n", UINT_MAX, UINT_MAX);
	printf("\033[90m\n\t- UINT max + 10 -\033[0m\n");
	ft_printf("\033[32m\tft_printf:\033[0m '%x' '%X'\n", UINT_MAX + 10, UINT_MAX + 10);
	printf("\033[34m\tprintf:\033[0m    '%x' '%X'\n", UINT_MAX + 10, UINT_MAX + 10);

	// %
	printf("\033[90m\n--- Test with percent char (%%) ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%%'\n");
	printf("\033[34mprintf:\033[0m    '%%'\n");

	// FLAGS & WIDTH
	printf("\033[90m\n--- Tests with flags width and precision ---\033[0m\n");
	ft_printf("\033[32mft_printf:\033[0m '%-10c' '%#x' '%+d' '% s' '%.5s' '%05d'\n", c, x, d, s, s, d);
	printf("\033[34mprintf:\033[0m    '%-10c' '%#x' '%+d' '% s' '%.5s' '%05d'\n", c, x, d, s, s, d);

	return (0);
}
