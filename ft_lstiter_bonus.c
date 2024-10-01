/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:02:27 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/01 16:02:36 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;

	node1 = ft_lstnew(ft_strdup("Nodo 1"));
	node2 = ft_lstnew(ft_strdup("Nodo 2"));
	node3 = ft_lstnew(ft_strdup("Nodo 3"));

	head = node1;
	node1->next = node2;
	node2->next = node3;

	ft_lstiter(head, f);

	return (0);
}*/