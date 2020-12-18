/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 22:36:16 by emallah           #+#    #+#             */
/*   Updated: 2019/10/25 19:26:48 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *str, int c)
{
	int a;

	a = ft_strlen((char *)str);
	while (a >= 0)
	{
		if (str[a] == c)
			return ((char *)str + a);
		a--;
	}
	return (0);
}
