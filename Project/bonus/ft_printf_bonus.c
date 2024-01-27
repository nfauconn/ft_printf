/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:07:14 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 17:00:58 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;
	t_pf	pf;

	init_pf(&pf, format);
	va_start(ap, format);
	ret = main_loop(&pf, &ap);
	va_end(ap);
	return (ret);
}
