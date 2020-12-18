/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:34:37 by emallah           #+#    #+#             */
/*   Updated: 2019/10/31 00:47:59 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)src != (unsigned char)c)
			*(unsigned char*)dest++ = *(unsigned char*)src++;
		else
		{
			*(unsigned char*)dest++ = *(unsigned char*)src++;
			return (dest);
		}
	}
	return (NULL);
}
