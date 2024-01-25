/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:56:22 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:56:23 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{

//	printf("%.*x\n", 134, 0);
//	ft_printf("%.*x\n", 134, 0);

//	printf("%.*x\n", 0, 0);
//	ft_printf("%.*x\n", 0, 0);

//	printf("%25.*x\n", 0, -12);
//	ft_printf("%25.*x\n", 0, -12);

/*	char	c = 'a';
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";

	printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j);
	ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j);
*/

//	printf("");
//	ft_printf("");

printf("return ft_pri : %d\n", ft_printf(""));
printf("return printf : %d\n", printf(""));

	return(0);
}
