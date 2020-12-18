/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:49:56 by emallah           #+#    #+#             */
/*   Updated: 2019/10/24 19:10:19 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static int		len(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char			*ft_strdup(const char *str)
{
	int		i;
	char	*p;
	int		slen;

	slen = len((char*)str) + 1;
	p = (char*)malloc(sizeof(char) * slen);
	if (p == 0)
		return (0);
	i = 0;
	while (i < (slen - 1))
	{
		p[i] = ((char*)str)[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
