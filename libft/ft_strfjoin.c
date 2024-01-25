/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:56:56 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:59:08 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strfjoin(char **over, char *buff)
{
	char	*tmp;

	if (!over)
		return ;
	tmp = *over;
	*over = ft_strjoin(*over, buff);
	free(tmp);
}
