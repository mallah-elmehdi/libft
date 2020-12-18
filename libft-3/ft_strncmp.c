/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:25:49 by emallah           #+#    #+#             */
/*   Updated: 2019/11/01 01:50:31 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t c;
	size_t a;

	if (n == 0)
		return (0);
	c = ft_strlen(str1);
	a = ft_strlen(str2);
	i = 0;
	while (i <= a && i <= c && i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i]) - ((unsigned char)str2[i]));
		i++;
	}
	return (0);
}
