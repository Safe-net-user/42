/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:57:02 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/20 23:36:11 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void))
{
	t_list	*n_list;
	t_list	*new;
	t_list	*current;

	current = lst;
    while (current != NULL)
    {
		new = f(current->content);
		new = ft_lstnew(new->content);
		if (new == NULL)
		{
			del(new->content);
			free(new);
		}
		else
			ft_lstadd_back(&n_list, new);
		current = current->next;
	}
}
