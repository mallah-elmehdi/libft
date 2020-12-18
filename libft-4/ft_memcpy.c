/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 20:01:23 by emallah           #+#    #+#             */
/*   Updated: 2019/11/03 16:04:48 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p0;
	unsigned char	*p1;

	i = 0;
	p0 = (unsigned char*)dest;
	p1 = (unsigned char*)src;
	if (p0 == NULL && p1 == NULL)
		return (dest);
	while (i < n)
	{
		p0[i] = p1[i];
		i++;
	}
	return (dest);
}
