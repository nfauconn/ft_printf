/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_into_buffer_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:16:33 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 17:01:06 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	increase_buffer(t_pf *pf, size_t len)
{
	char	*tmp;

	while ((pf->bufsize + len) > pf->bufalloc)
	{
		tmp = ft_memalloc(pf->bufalloc + BUFFSIZE);
		ft_memcpy(tmp, pf->buffer, pf->bufsize);
		free(pf->buffer);
		pf->buffer = tmp;
		pf->bufalloc += BUFFSIZE;
	}
}

void		insert_into_buffer(t_pf *pf, char *insert, size_t len)
{
	if (pf->buffer == NULL)
		pf->buffer = ft_memalloc(BUFFSIZE);
	if ((pf->bufsize + len) > pf->bufalloc)
		increase_buffer(pf, len);
	ft_memcpy(pf->buffer + pf->bufsize, insert, len);
	pf->bufsize += len;
}
