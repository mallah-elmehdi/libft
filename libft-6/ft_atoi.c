/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:05:12 by emallah           #+#    #+#             */
/*   Updated: 2019/10/29 15:42:55 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		calc(const char *s)
{
	long i;
	long p;
	long a;

	i = 0;
	p = 10;
	a = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		a = a * p + (s[i] - 48);
		i++;
	}
	if (i > 10)
		return (-1);
	return ((int)a);
}

static int		neg_calc(const char *s)
{
	long i;
	long p;
	long a;

	i = 0;
	p = 10;
	a = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		a = a * p + (s[i] - 48);
		i++;
	}
	a = -a;
	if (i > 10)
		return (0);
	return ((int)a);
}

int				ft_atoi(const char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if ((s[i] > 8 && s[i] < 14) || s[i] == 32)
			i++;
		else if (s[i] >= 48 && s[i] <= 57)
			return (calc(&s[i]));
		else if (s[i] == '+')
		{
			if (s[++i] >= 48 && s[i] <= 57)
				return (calc(&s[i]));
			break ;
		}
		else if (s[i] == '-')
		{
			if (s[++i] >= 48 && s[i] <= 57)
				return (neg_calc(&s[i]));
			break ;
		}
		else
			break ;
	}
	return (0);
}
