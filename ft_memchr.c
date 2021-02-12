/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:03:52 by ade-garr          #+#    #+#             */
/*   Updated: 2019/11/07 15:44:12 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	b;
	size_t			i;

	b = c;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == b)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
