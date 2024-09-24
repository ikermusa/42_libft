/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:51:57 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/24 12:52:06 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;
	int		size;

	head = ft_lstnew("Nodo 1");
	node1 = ft_lstnew("Nodo 2");
	node2 = ft_lstnew("Nodo 3");
	node3 = ft_lstnew("Nodo 4");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);

	size = ft_lstsize(head);
	printf("El tamaño de la lista es: %d\n", size);

	return (0);
}
