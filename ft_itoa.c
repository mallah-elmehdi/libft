/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:51:53 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 14:38:32 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_s(long n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (2);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char		*neg_case(long a)
{
	char	*s;
	int		count;

	a = -a;
	count = len_s(a) + 1;
	s = (char*)ft_calloc(sizeof(char), count);
	if (s == 0)
		return (0);
	s[0] = '-';
	s[--count] = 0;
	while (count > 1)
	{
		s[--count] = (a % 10) + 48;
		a = a / 10;
	}
	return (s);
}

char			*ft_itoa(int a)
{
	char	*s;
	int		count;

	if (a < 0)
		return (neg_case((long)a));
	count = len_s((long)a);
	if (a >= 0)
	{
		s = (char*)ft_calloc(sizeof(char), count);
		if (s == 0)
			return (0);
		s[--count] = 0;
	}
	while (count > 0)
	{
		s[--count] = (a % 10) + 48;
		a = a / 10;
	}
	return (s);
}
