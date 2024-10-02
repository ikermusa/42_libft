/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:28:49 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/02 11:03:04 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

void	*f(void *content)
{
	int	*new_content;

	new_content = malloc(sizeof(int));
	if (!new_content)
		return (NULL);
	*new_content = (*(int *)content) * 2;
	return (new_content);
}

void	del(void *content)
{
	free(content);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;
	t_list	*current;
	int		*val1;
	int		*val2;
	int		*val3;

	val1 = malloc(sizeof(int));
	val2 = malloc(sizeof(int));
	val3 = malloc(sizeof(int));
	*val1 = 1;
	*val2 = 2;
	*val3 = 3;
	lst = ft_lstnew(val1);
	ft_lstadd_back(&lst, ft_lstnew(val2));
	ft_lstadd_back(&lst, ft_lstnew(val3));
	new_lst = ft_lstmap(lst, f, del);
	current = new_lst;
	while (current)
	{
		printf("Contenido duplicado: %d\n", *(int *)current->content);
		current = current->next;
	}
	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);
}
*/