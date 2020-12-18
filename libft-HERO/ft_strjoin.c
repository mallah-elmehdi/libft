/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:16:17 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 23:00:25 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lenth(const char *s, const char *s0)
{
	if (s == NULL && s0 != NULL)
		return (ft_strlen(s0) + 1);
	else if (s != NULL && s0 == NULL)
		return (ft_strlen(s) + 1);
	else
		return (ft_strlen(s) + ft_strlen(s0) + 1);
}

char	*ft_strjoin(const char *s, const char *s0)
{
	char	*p;
	size_t	j;

	if (s == NULL && s0 == NULL)
		return (NULL);
	j = lenth(s, s0);
	if (!(p = (char*)ft_calloc(sizeof(char), j)))
		return (NULL);
	while (s != NULL && *s != '\0')
		*p++ = *(char*)s++;
	while (s0 != NULL && *s0 != '\0')
		*p++ = *(char*)s0++;
	return (&p[-j + 1]);
}
