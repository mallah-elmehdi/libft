/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 22:36:16 by emallah           #+#    #+#             */
/*   Updated: 2019/11/03 16:57:08 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*p;

	p = (char *)str;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (p[i] == c)
			return (&p[i]);
		i--;
	}
	if (p[i] == c)
		return (&p[i]);
	return (NULL);
}
