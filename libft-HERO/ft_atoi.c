/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:05:12 by emallah           #+#    #+#             */
/*   Updated: 2019/11/04 22:41:10 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s)
{
	long	i;
	long	n;
	int		sg;

	i = 0;
	n = 0;
	sg = 1;
	while ((s[i] > 8 && s[i] < 14) || s[i] == 32)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
		if (s[i] >= 48 && s[i] <= 57 && s[i - 1] == '-')
			sg = -1;
	}
	if (s[i] < 48 && s[i] > 57)
		return (0);
	while (s[i] >= 48 && s[i] <= 57)
	{
		n = (n * 10) + (s[i] - 48);
		i++;
	}
	return (n * sg);
}
