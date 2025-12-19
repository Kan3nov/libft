/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:59:24 by klafi             #+#    #+#             */
/*   Updated: 2025/12/19 13:33:26 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node;

	while (((*lst) -> next) != NULL)
	{
		node = (*lst);
		*lst = (*lst) -> next;
		ft_lstdelone(node, del);
	}
	ft_lstdelone(*lst, del);
	lst = NULL;
}
