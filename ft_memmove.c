/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:54:34 by ade-garr          #+#    #+#             */
/*   Updated: 2019/11/07 15:01:41 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*a;
	const char		*b;
	size_t			i;

	i = 0;
	a = dest;
	b = src;
	if (a == 0 && b == 0)
		return (NULL);
	if (b < a && a < b + n)
	{
		while (n--)
			a[n] = b[n];
	}
	else
	{
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dest);
}
