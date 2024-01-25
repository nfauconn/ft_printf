/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:55:28 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 17:00:09 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa_base(unsigned long long n, int base, size_t maj)
{
	char	*ret;
	int		len;
	char	*base_min;
	char	*base_maj;

	base_min = "0123456789abcdef";
	base_maj = "0123456789ABCDEF";
	len = ft_nbrlen_base(n, base);
	if (n == 0)
		return (ft_strdup("0"));
	if (!(ret = (char*)ft_memalloc(len + 1)))
		return (NULL);
	while (n)
	{
		if (maj)
			ret[len-- - 1] = base_maj[n % base];
		else
			ret[len-- - 1] = base_min[n % base];
		n /= base;
	}
	return (ret);
}
