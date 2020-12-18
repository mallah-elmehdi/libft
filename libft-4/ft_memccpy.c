/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:34:37 by emallah           #+#    #+#             */
/*   Updated: 2019/11/03 15:39:21 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p0;
	unsigned char	*p1;

	p0 = (unsigned char*)dest;
	p1 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if (p1[i] == (unsigned char)c)
		{
			p0[i] = p1[i];
			return (&p0[i + 1]);
		}
		p0[i] = p1[i];
		i++;
	}
	return (NULL);
}
