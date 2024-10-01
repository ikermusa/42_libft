/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:28:49 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/01 16:28:57 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_lst = ft_lstnew(new_content);
		if (!new_lst)
		{
			del(new_content);
			ft_lstclear(lst, del);
			return (NULL);
		}
		ft_lstadd_back(lst, new_lst);
		lst = lst->next;
	}
	return (new_lst);
}

t_list	*f(void *content)
{
	int	*new_content;

	new_content = malloc(sizeof(int));
	if (new_content == NULL)
		return (NULL);
	*new_content = (*(int *)content) * 2;
	return (new_content);
}

void	del(void *content)
{
	free(content);
}

int main(void)
{
    t_list *lst = ft_lstnew((void *)(intptr_t)1);
    ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)2));
    ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)3));

    t_list *new_list = ft_lstmap(lst, duplicate_content, free);

}