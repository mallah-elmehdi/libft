/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:25:49 by emallah           #+#    #+#             */
/*   Updated: 2019/11/03 18:12:54 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*p0;
	unsigned char	*p1;

	p0 = (unsigned char*)str1;
	p1 = (unsigned char*)str2;
	i = 0;
	while (i < n && i <= ft_strlen(str1) && i <= ft_strlen(str2))
	{
		if (p0[i] != p1[i])
			return (p0[i] - p1[i]);
		i++;
	}
	return (0);
}
