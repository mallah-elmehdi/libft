/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:55:27 by emallah           #+#    #+#             */
/*   Updated: 2019/10/29 17:54:38 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	char	*p;
	char	*q;
	size_t	i;

	i = 0;
	q = (char*)str2;
	if (*str2 == 0 || (str1 == str2 && n == ft_strlen(str1)))
		return ((char*)str1);
	while (i++ < n && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 == *str2)
		{
			p = (char*)str1;
			while (*str1++ == *str2++ && i++ < n)
			{
				if (*(str2) == 0)
					return (p);
			}
			str2 = q;
		}
		str1++;
	}
	return (NULL);
}
