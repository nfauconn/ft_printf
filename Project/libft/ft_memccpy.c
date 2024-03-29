/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:31:21 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:58:22 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*p;

	p = ft_memchr(src, c, n);
	if (p != NULL)
	{
		ft_memcpy(dst, src, p - src + 1);
		return (ft_memchr(dst, c, n) + 1);
	}
	ft_memcpy(dst, src, n);
	return (NULL);
}
