/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:59:42 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:57:58 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *tab;

	if (!(tab = malloc(count * size)))
		return (NULL);
	if (tab == 0)
		return (tab);
	ft_bzero(tab, count * size);
	return (tab);
}
