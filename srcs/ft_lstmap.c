/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:36:05 by ade-garr          #+#    #+#             */
/*   Updated: 2019/11/15 15:07:43 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ls;
	int		i;
	int		j;

	(void)del;
	i = 0;
	j = ft_lstsize(lst);
	if (!lst || !(ls = malloc(sizeof(t_list) * j)))
		return (NULL);
	while (i + 1 < j)
	{
		ls[i].content = (*f)(lst->content);
		ls[i].next = &ls[i + 1];
		lst = lst->next;
		i++;
	}
	ls[i].content = (*f)(lst->content);
	ls[i].next = 0;
	return (ls);
}
