/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:02:51 by oumali            #+#    #+#             */
/*   Updated: 2021/11/11 21:57:31 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void*))
{
	t_list	*newlist;
	t_list	*node;

	if (lst == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst -> content));
		if (node == NULL)
		{
			ft_lstclear(&node, del);
			return (newlist);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst -> next;
	}
	return (newlist);
}
