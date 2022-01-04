/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:53:43 by ade-garr          #+#    #+#             */
/*   Updated: 2019/11/07 13:55:22 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest2;
	const char		*src2;
	char			c2;
	size_t			i;

	i = 0;
	dest2 = dest;
	src2 = src;
	c2 = c;
	while (i < n && c2 != src2[i])
	{
		dest2[i] = src2[i];
		i++;
	}
	if (i < n && c2 == src2[i])
	{
		dest2[i] = src2[i];
		return (&(dest2[i + 1]));
	}
	return (NULL);
}
