/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:37:31 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/24 15:37:42 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	head = ft_lstnew("Nodo 1");
	node1 = ft_lstnew("Nodo 2");
	node2 = ft_lstnew("Nodo 3");
	node3 = ft_lstnew("Nodo 4");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);

	last = ft_lstlast(head);
	if (last)
		printf("El contenido del último nodo es: %s\n", (char *)last->content);
	else
		printf("La lista está vacía.\n");

	return (0);
}*/