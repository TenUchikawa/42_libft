/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 07:01:20 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 11:18:14 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew((*f)(lst));
	if (!new)
		return (0);
	first = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (!new->next)
		{
			ft_lstclear(&first, del);
			return (0);
		};
		new = new->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (first);
}
