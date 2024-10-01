/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:02:16 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/24 17:02:24 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(malloc(20));

	if (node)
	{
		ft_lstdelone(node, del);
		printf("Nodo eliminado.\n");
	}

	return (0);
}*/