/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:29:44 by psomjitr          #+#    #+#             */
/*   Updated: 2022/02/27 19:33:12 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*list;

	head = NULL;
	while (lst)
	{
		list = ft_lstnew((*f)(lst->content));
		if (list == NULL)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&head, del);
		}
		ft_lstadd_back(&head, list);
		lst = lst->next;
	}
	return (head);
}
