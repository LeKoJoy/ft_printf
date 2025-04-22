/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:30:35 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/25 16:08:24 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_node;
	t_list	*n_list;

	if (!f || !del)
		return (NULL);
	f_node = NULL;
	while (lst)
	{
		n_list = ft_lstnew((*f)(lst->content));
		if (!n_list)
		{
			while (f_node)
			{
				n_list = f_node->next;
				(*del)(f_node->content);
				free(f_node);
				f_node = n_list;
			}
			lst = lst->next;
		}
		ft_lstadd_back(&f_node, n_list);
		lst = lst->next;
	}
	return (f_node);
}
