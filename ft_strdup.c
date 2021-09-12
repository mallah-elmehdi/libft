/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:49:56 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 08:44:21 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *str)
{
	size_t	i;
	size_t	slen;
	char	*p;

	slen = ft_strlen((str)) + 1;
	p = (char*)ft_calloc(sizeof(char), slen);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (((char*)str)[i] != '\0')
	{
		p[i] = ((char*)str)[i];
		i++;
	}
	return (p);
}
