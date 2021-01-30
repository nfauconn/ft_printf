/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_percent_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:53:24 by nfauconn          #+#    #+#             */
/*   Updated: 2021/01/24 13:47:09 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	conv_percent(va_list *ap, t_conv *conv)
{
	(void)ap;
	if (conv->is_width && conv->width > 1)
	{
		conv->len = conv->width;
		conv->to_conv = ft_memalloc(conv->len + 1);
		if (conv->zero_padded && !conv->left)
			ft_memset(conv->to_conv, '0', conv->len);
		else
			ft_memset(conv->to_conv, ' ', conv->len);
		if (conv->left)
			conv->to_conv[0] = '%';
		else
			conv->to_conv[conv->len - 1] = '%';
	}
	else
	{
		conv->len = 1;
		conv->to_conv = ft_memalloc(2);
		conv->to_conv[0] = '%';
	}
}
