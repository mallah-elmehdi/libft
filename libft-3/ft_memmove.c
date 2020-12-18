/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:19:21 by emallah           #+#    #+#             */
/*   Updated: 2019/10/31 21:18:29 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == 0 && src == 0)
		return (0);
	if (dest > src)
	{
		while (n--)
			((char*)dest)[n] = ((char*)src)[n];
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
