/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:42:20 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 11:42:23 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst -> content));
	if (!new_lst)
		return (NULL);
	temp = lst;
	temp = temp -> next;
	while (temp != NULL)
	{
		new_elem = ft_lstnew(f(temp -> content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		temp = temp -> next;
	}
	return (new_lst);
}
