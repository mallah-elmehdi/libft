/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:30:38 by emallah           #+#    #+#             */
/*   Updated: 2019/11/01 15:50:07 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	a;

	a = len;
	if (!(s == NULL || ft_strlen(s) < start ||
				ft_strlen(&s[start]) < len || len == 0))
	{
		p = (char*)ft_calloc(sizeof(char), (len + 1));
		if (p == 0)
			return (NULL);
		s = &s[start];
		while (len-- > 0)
			*p++ = *s++;
		p = &p[-a];
		return (p);
	}
	return ("\0");
}
