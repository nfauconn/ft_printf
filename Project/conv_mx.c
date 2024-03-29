/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_mx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:27:43 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:57:41 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		conv_mx(va_list *ap, t_conv *conv)
{
	size_t	len;
	int		i;

	i = 0;
	if (conv->hashtag)
		conv_p(ap, conv);
	else
		conv_x(ap, conv);
	len = conv->len;
	while (len--)
	{
		conv->to_conv[i] = ft_toupper(conv->to_conv[i]);
		i++;
	}
}
