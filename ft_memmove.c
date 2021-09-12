/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:19:21 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 23:05:56 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *p0;
	unsigned char *p1;

	p0 = (unsigned char*)dest;
	p1 = (unsigned char*)src;
	if (p0 == p1)
		return (p0);
	if (n == 0)
		return (dest);
	if (p0 == NULL && p1 == NULL)
		return (NULL);
	if (p0 > p1 && p0 < (p1 + n))
	{
		while (n)
		{
			n--;
			p0[n] = p1[n];
		}
		p0[n] = p1[n];
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
