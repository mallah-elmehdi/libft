/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:30:38 by emallah           #+#    #+#             */
/*   Updated: 2019/10/29 15:39:18 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	a;

	a = len;
	p = (char*)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (NULL);
	if (!(s == 0 || ft_strlen(s) < start))
	{
		s = &s[start];
		while (len-- > 0)
			*p++ = *s++;
	}
	*p = '\0';
	p = &p[-a];
	return (p);
}
