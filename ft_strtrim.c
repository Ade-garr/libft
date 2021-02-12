/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:25:18 by ade-garr          #+#    #+#             */
/*   Updated: 2019/11/13 17:31:23 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checkset(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		i1;
	int		i2;
	char	*s2;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_checkset(s1[i], set) == 1)
		i++;
	i1 = i;
	while (s1[i])
		i++;
	while (i > i1 && ft_checkset(s1[i - 1], set) == 1)
		i--;
	i2 = i;
	if (!(s2 = malloc(sizeof(char) * (i2 - i1 + 1))))
		return (NULL);
	i = 0;
	while (i1 < i2)
		s2[i++] = s1[i1++];
	s2[i] = '\0';
	return (s2);
}
