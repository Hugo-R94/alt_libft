/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:32:56 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/29 15:58:53 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	
	if (!lst || !f || !del)
		return (NULL);
	new_list= ft_lstnew(f(lst->content));
	temp = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (new_list == NULL)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		// new_list =new_list->next;
		// lst = lst->next;
		ft_lstadd_back(&temp, new_list);
		lst = lst->next;

	}
	return (temp);	
}
