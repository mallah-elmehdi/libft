/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:24:52 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 08:39:39 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	c;

	i = 0;
	c = '\n';
	if (s)
	{
		while (s[i] != 0)
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, &c, 1);
	}
}
