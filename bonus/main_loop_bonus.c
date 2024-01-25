/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_loop_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:25:21 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 17:01:10 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int				main_loop(t_pf *pf, va_list *ap)
{
	while (*pf->format)
	{
		while (*pf->ptr && (*pf->ptr != '%'))
			pf->ptr++;
		insert_into_buffer(pf, pf->format, pf->ptr - pf->format);
		if (*pf->ptr && *pf->ptr == '%')
		{
			pf->ptr++;
			convert(ap, pf);
		}
		pf->format = pf->ptr;
	}
	if (pf->buffer)
		write(1, pf->buffer, (pf->bufsize));
	free(pf->buffer);
	return ((int)pf->bufsize);
}
