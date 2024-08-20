/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:49:32 by mjoundi           #+#    #+#             */
/*   Updated: 2024/06/16 13:41:31 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*node;
	t_list	*ptr;
	void	*new_content;

	lst2 = NULL;
	node = NULL;
	ptr = lst;
	while (ptr)
	{
		new_content = f(ptr->content);
		node = ft_lstnew(new_content);
		if (!node)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, node);
		ptr = ptr->next;
	}
	return (lst2);
}
