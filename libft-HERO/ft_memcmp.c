/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:35:50 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 22:54:25 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p0;
	unsigned char	*p1;

	p0 = (unsigned char*)s1;
	p1 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (p0[i] != p1[i])
			return (p0[i] - p1[i]);
		i++;
	}
	return (0);
}
