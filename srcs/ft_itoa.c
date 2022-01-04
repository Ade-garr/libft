/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:04:18 by ade-garr          #+#    #+#             */
/*   Updated: 2019/11/13 18:42:06 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb(unsigned int n)
{
	int	k;

	k = 0;
	if (n >= 10)
	{
		n = n / 10;
		k = ft_nb(n);
	}
	k++;
	return (k);
}

char		*ft_itoa(int n)
{
	int				k;
	unsigned int	nb;
	char			*s;
	int				a;

	a = 0;
	k = (n < 0) ? 1 : 0;
	nb = (k == 1) ? -n : n;
	if (!(s = malloc(sizeof(char) * (ft_nb(nb) + k + 1))))
		return (NULL);
	if (k == 1)
		s[a] = '-';
	a = ft_nb(nb) + k;
	s[a] = '\0';
	if (nb == 0)
		s[a - 1] = '0';
	while (nb > 0)
	{
		s[--a] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (s);
}
