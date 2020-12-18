/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:37:01 by emallah           #+#    #+#             */
/*   Updated: 2019/10/29 18:26:39 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dest, const char *src, size_t n)
{
	static size_t i;

	if (n)
	{
		while (((char*)src)[i] != 0 && i < n - 1)
		{
			dest[i] = ((char*)src)[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
