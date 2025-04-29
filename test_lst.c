void	print_list(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		printf("liste n%zu ",i);
		printf("/ adresse = %p ",lst);
		printf("/ content = %s ",(char *)lst->content);
		printf("/ adresse liste suivante = %p\n",lst->next);
		lst = lst->next;
		i++;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		t_list	*tmp;
		tmp = *lst;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	else
	{
		del(lst->content);
		free(lst);
	}
}


void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	t_list *tmp;
	tmp = *lst;
	while (tmp != NULL)
	{
		ft_lstdelone(tmp,del);
		tmp = tmp->next;
	}
	return ;
	
}

int	main(void)
{
	char	*middle = strdup("okokokok");
	char	*first_str = strdup("opppoppop");
	char	*last = strdup("wqqwqwwqqw");
	t_list	*first = ft_lstnew(middle);
	t_list	**list = &first;

	ft_lstadd_front(list, ft_lstnew(first_str));
	ft_lstadd_back(list, ft_lstnew(last));
	//ft_lstadd_back(list,ft_lstnew(middle));
	printf("Expect 3 elements, wqqwqwwqqw first\n");
	print_list(*list);
	return (0);
}
