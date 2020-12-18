/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 21:48:55 by emallah           #+#    #+#             */
/*   Updated: 2019/10/25 11:50:56 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, char c)
{
	int i;
	int a;

	a = ft_strlen((char *)str);
	i = 0;
	while (i <= a)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
