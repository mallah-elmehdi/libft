/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:55:27 by emallah           #+#    #+#             */
/*   Updated: 2019/11/03 18:38:18 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	o;

	i = 0;
	if (*str2 == 0 || str1 == str2)
		return ((char *)str1);
	while (i < n && ((char *)str1)[i] != '\0' &&
			ft_strlen(str1) >= ft_strlen(str2))
	{
		j = 0;
		o = 0;
		while (str1[i] == str2[j] && i < n)
		{
			j++;
			i++;
			o++;
			if (str2[j] == '\0')
				return (&((char*)str1)[i - o]);
		}
		i++;
	}
	return (NULL);
}
