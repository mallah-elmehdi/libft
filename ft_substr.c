/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:30:38 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 23:43:39 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start || len == 0)
		return (ft_strdup(""));
	if (!(p = (char*)ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		p[i] = ((char *)s)[start + i];
		i++;
	}
	return (p);
}
