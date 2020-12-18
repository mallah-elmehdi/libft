/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:37:19 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 22:26:06 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *c)
{
	t_list *out;

	out = (t_list *)malloc(sizeof(t_list));
	if (out == NULL)
		return (NULL);
	out->content = c;
	out->next = NULL;
	return (out);
}
