/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 20:01:23 by emallah           #+#    #+#             */
/*   Updated: 2019/10/30 15:44:05 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(char *dest, const char *src, size_t n)
{
	size_t a;

	a = n;
	if (dest == src)
		return (dest);
	if (dest == NULL && src == NULL)
		return (0);
	while (n--)
		*(char*)dest++ = *(char*)src++;
	return (&dest[-a]);
}
