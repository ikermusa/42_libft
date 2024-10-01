/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:15:40 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/01 15:15:55 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;

	char *content1 = ft_strdup("Nodo 1");
	char *content2 = ft_strdup("Nodo 2");
	char *content3 = ft_strdup("Nodo 3");

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);

	head = node1;
	node1->next = node2;
	node2->next = node3;

	ft_lstclear(&head, del);

	if (head == NULL)
		printf("La lista ha sido completamente eliminada.\n");

	return (0);
}
*/