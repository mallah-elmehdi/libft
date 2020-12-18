/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:45:11 by emallah           #+#    #+#             */
/*   Updated: 2019/10/31 00:32:15 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t a, size_t b)
{
	size_t	i;
	void	*str;

	i = 0;
	str = malloc(a * b);
	if ((char*)str == 0)
		return (0);
	ft_bzero(str, (a * b));
	return (str);
}
