/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:50:25 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:58:41 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen_base(unsigned long long nbr, int base)
{
	int	ret;

	ret = 1;
	while (nbr /= base)
		ret++;
	return (ret);
}
