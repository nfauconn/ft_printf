/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflagpf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:07:56 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:58:12 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isflagpf(int c)
{
	return (c == '-' || c == '0' || c == ' ' || c == '#' || c == '+'
							|| c == '*' || c == '.');
}
