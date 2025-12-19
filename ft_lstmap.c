/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:42:20 by klafi             #+#    #+#             */
/*   Updated: 2025/12/19 18:55:23 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (lst == NULL)
		return (NULL);
	new_lst = ft_lstnew(f(lst -> content));
	if (!new_lst)
		return (NULL);
	lst = lst -> next;
	while (lst != NULL)
	{
		new_elem = ft_lstnew(f(lst -> content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst -> next;
	}
	return (new_lst);
}
