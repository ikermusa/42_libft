/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:02:31 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/24 16:02:42 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*new_node;
	t_list	*current;

	head = ft_lstnew("Nodo 1");
	node1 = ft_lstnew("Nodo 2");
	node2 = ft_lstnew("Nodo 3");
	new_node = ft_lstnew("Nodo 4");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, new_node);

	current = head;
	while (current)
	{
		printf("Contenido: %s\n", (char *)current->content);
		current = current->next;
	}

	return (0);
}*/