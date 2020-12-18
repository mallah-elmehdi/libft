/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:18:39 by emallah           #+#    #+#             */
/*   Updated: 2019/11/05 01:02:22 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t x)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	a;
	size_t	i;

	i = 0;
	if ((x == 0 && dest == NULL) || x == 0)
		return (ft_strlen(src));
	len_dest = ft_strlen((const char *)dest);
	len_src = ft_strlen(src);
	a = len_dest;
	if (!(len_dest > (x - 1)))
	{
		while (i < (x - 1 - len_dest) && src[i] != 0)
			dest[a++] = src[i++];
		dest[a] = '\0';
		return (len_src + len_dest);
	}
	else
		return (len_src + x);
}
