/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:28:53 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/24 11:29:03 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2 = ft_lstnew("Node 2");
	t_list	*node3 = ft_lstnew("Node 3");

	node1 = ft_lstnew("Node 1");
	node2->next = node3;
	node1->next = node2;
	printf("Lista original:\n");
	printf("%p\n", (void *)node1);
	t_list	*new_node = ft_lstnew("New Front Node");

	ft_lstadd_front(&node1, new_node);
	printf("Lista después de añadir el nuevo nodo al frente:\n");
	printf("%p\n", (void *)new_node);
	free(node1);
	free(node2);
	free(node3);
	free(new_node);
	return (0);
}*/