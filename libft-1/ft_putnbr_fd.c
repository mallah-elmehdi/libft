/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:44:50 by emallah           #+#    #+#             */
/*   Updated: 2019/10/30 14:48:17 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		powe(int p, int i)
{
	while (i > 1)
	{
		p = p * 10;
		i--;
	}
	return (p);
}

static int		pow_ind(long n)
{
	int		i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void		neg_case(long a, int fd)
{
	long	p;
	int		i;
	char	c;

	c = '-';
	a = -a;
	write(fd, &c, 1);
	i = pow_ind(a);
	p = powe(10, i);
	if (a < 10)
	{
		c = a + 48;
		write(fd, &c, 1);
	}
	else
	{
		while (p > 0)
		{
			c = (a / p) + 48;
			a = a - ((a / p) * p);
			p = p / 10;
			write(fd, &c, 1);
		}
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int		p;
	char	c;
	int		i;

	if (n < 0)
		neg_case(n, fd);
	else if (n > 9)
	{
		i = pow_ind(n);
		p = powe(10, i);
		while (p > 0)
		{
			c = (n / p) + 48;
			n = n - ((n / p) * p);
			p = p / 10;
			write(fd, &c, 1);
		}
	}
	else
	{
		c = n + 48;
		write(fd, &c, 1);
	}
}
