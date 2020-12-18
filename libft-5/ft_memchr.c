/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:14:36 by emallah           #+#    #+#             */
/*   Updated: 2019/10/29 16:08:56 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char*)str != (unsigned char)c)
			str++;
		else
			return ((char *)str);
	}
	return (NULL);
}
