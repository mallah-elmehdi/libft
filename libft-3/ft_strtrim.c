/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:06:53 by emallah           #+#    #+#             */
/*   Updated: 2019/11/01 14:47:45 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	index_front(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != 0 && set[j] != 0)
	{
		if (str[i] != set[j])
		{
			++j;
			if (set[j] == str[i])
			{
				++i;
				j = 0;
			}
			else if (set[j] == 0)
				return (i);
		}
		else
			i++;
	}
	return (i);
}

static size_t	index_back(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	if (str[0] == '\0')
		return (0);
	i = ft_strlen(str) - 1;
	j = 0;
	while ((i - 1) > 0 && set[j] != 0)
	{
		if (str[i] != set[j])
		{
			++j;
			if (set[j] == str[i])
			{
				--i;
				j = 0;
			}
			else if (set[j] == 0)
				return (i);
		}
		else
			i--;
	}
	return (i);
}

static char		*out_p(char *p)
{
	p[0] = '\0';
	return (p);
}

char			*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	size_t	a;
	size_t	c;
	char	*p;

	if (str == NULL || set == NULL)
		return ((char*)str);
	i = index_front(str, set);
	c = index_back(str, set) - i + 2;
	a = 0;
	if (i > (c + i - 2))
		c = 1;
	p = (char*)ft_calloc(sizeof(char), c);
	if (p == 0)
		return (NULL);
	else if (c == 1)
		return (out_p(p));
	while (a < c - 1)
	{
		p[a] = str[i];
		i++;
		a++;
	}
	p[a] = 0;
	return (p);
}
