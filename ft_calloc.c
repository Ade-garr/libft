/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:49:46 by ade-garr          #+#    #+#             */
/*   Updated: 2021/07/08 13:42:07 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	i;

	i = 0;
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		*(char *)(s + i) = 0;
		i++;
	}
	return (s);
}
