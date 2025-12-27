/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:59:24 by klafi             #+#    #+#             */
/*   Updated: 2025/12/22 13:42:54 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	**temp;

	if (!lst || !*lst || !del)
		return ;
	temp = lst;
	while (((*temp)->next) != NULL)
	{
		node = (*temp);
		*temp = (*temp)-> next;
		ft_lstdelone(node, del);
	}
	ft_lstdelone(*temp, del);
	*lst = NULL;
}
