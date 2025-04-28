/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:35:29 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 14:17:39 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

void print_list(t_list *lst) {
	size_t	i;

	i = 0;
	while (lst) {
		printf("%zu:%s\n", i, (char *)lst->content);
		lst = lst->next;
		i++;
	}
	printf("\n");
}

t_list *ft_lstnew(void *content)
{
    t_list *new_list;

    new_list = malloc(sizeof(t_list));
    if (!new_list)
        return (NULL);
    new_list->content = content;
    new_list->next = NULL;
    return (new_list);		
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new = malloc(sizeof(t_list));
    if (new)
        return ;
    new->next = *lst;
    *lst = new;
    return ;	
}

int main(void)
{
    char	*middle = strdup("okokokok");
	char	*first_str = strdup("opppoppop");
	char	*last = strdup("wqqwqwwqqw");
    
    t_list *first = ft_lstnew(middle);
	t_list **list = &first;
    
    ft_lstadd_front(list, ft_lstnew(first_str));
    ft_lstadd_front(list, ft_lstnew(first_str));
	printf("Expect 3 elements, opppoppop first\n");
	print_list(*list);
}