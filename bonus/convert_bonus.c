/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:59:17 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 17:00:53 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void			convert(va_list *ap, t_pf *pf)
{
	t_conv	conv;

	init_conv(&conv);
	parse_flag(pf, &conv, ap);
	if (parse_conv(pf) != -1)
	{
		pf->fun_ptr[pf->index_conv](ap, &conv);
		insert_into_buffer(pf, conv.to_conv, conv.len);
		free(conv.to_conv);
		conv.to_conv = NULL;
	}
}
