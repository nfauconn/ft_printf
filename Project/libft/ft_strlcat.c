/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:27:40 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:59:15 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t dst_len;

	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (ft_strlen(src) + dstsize);
	i = 0;
	j = dst_len;
	while (src[i] && j < dstsize - 1)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dst_len + ft_strlen(src));
}
