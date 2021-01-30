/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:01:03 by nfauconn          #+#    #+#             */
/*   Updated: 2020/11/26 13:59:28 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*nombre;
	int		i;
	long	nb;

	nb = (long)n;
	i = ft_nbrlen_base(nb, 10);
	if (!(nombre = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nombre[i--] = '\0';
	if (nb == 0)
		nombre[i] = '0';
	else if (nb < 0)
	{
		nombre[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		nombre[i--] = (nb % 10 + '0');
		nb = nb / 10;
	}
	return (nombre);
}
