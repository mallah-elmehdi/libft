/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:07:02 by emallah           #+#    #+#             */
/*   Updated: 2019/10/19 19:13:11 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int m)
{
	if ((m >= 0) && (m <= 127))
		return (1);
	else
		return (0);
}
