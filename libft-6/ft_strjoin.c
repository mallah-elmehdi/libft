/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:16:17 by emallah           #+#    #+#             */
/*   Updated: 2019/10/29 18:32:19 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(const char *s, const char *s0)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL || s0 == NULL)
		return ((char*)s);
	p = (char*)malloc(sizeof(char) * (ft_strlen(s) + ft_strlen(s0) + 1));
	if (p == 0)
		return (0);
	while (s[i] != 0)
	{
		p[i] = s[i];
		i++;
	}
	while (s0[j] != 0)
	{
		p[i] = s0[j];
		j++;
		i++;
	}
	p[i] = 0;
	return (p);
}
