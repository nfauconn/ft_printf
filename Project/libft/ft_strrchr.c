/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:23:13 by nfauconn          #+#    #+#             */
/*   Updated: 2024/01/25 16:59:35 by nfauconn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;
	char	c1;

	s1 = (char *)s;
	c1 = (char)c;
	i = 0;
	while (s1[i])
		i++;
	if (c1 == '\0')
		return (&s1[i]);
	while (i >= 0)
	{
		if (s1[i] == c1)
			return (&s1[i]);
		i--;
	}
	return (0);
}
