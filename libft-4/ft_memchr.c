/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:14:36 by emallah           #+#    #+#             */
/*   Updated: 2019/11/03 16:56:21 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return (&((void*)str)[i]);
		i++;
	}
	return (NULL);
}
