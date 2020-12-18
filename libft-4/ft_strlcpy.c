/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:37:01 by emallah           #+#    #+#             */
/*   Updated: 2019/11/03 17:18:29 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (n)
	{
		while (i < n - 1 && i < ft_strlen(src))
		{
			dest[i] = ((char*)src)[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
