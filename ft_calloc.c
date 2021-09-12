/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:45:11 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 07:46:06 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t a, size_t b)
{
	size_t	i;
	void	*p;

	i = 0;
	if (!(p = malloc(a * b)))
		return (NULL);
	while (i < (a * b))
	{
		((unsigned char *)p)[i] = '\0';
		i++;
	}
	return (p);
}
