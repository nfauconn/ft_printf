/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_u_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:57:15 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 17:00:46 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void		nb_to_array(t_conv *conv, char **str, unsigned int *i)
{
	if (*i == 0 && conv->is_prec && conv->prec == 0)
		*str = ft_strdup("");
	else
		*str = ft_ulltoa_base(*i, 10, 0);
}

void			conv_u(va_list *ap, t_conv *conv)
{
	unsigned int	i;
	char			*str;

	i = (unsigned int)va_arg(*ap, unsigned int);
	nb_to_array(conv, &str, &i);
	conv->len = ft_strlen(str);
	if (conv->prec <= conv->len && conv->width <= conv->len)
	{
		fill_without_pw(conv, str, 0);
		free(str);
		return ;
	}
	nb_spaces_zeros(conv, 0);
	conv->to_conv = ft_memalloc(conv->len\
									+ conv->nb_spaces + conv->nb_zeros + 1);
	fill_with_pw(conv, str, 0);
	free(str);
}
