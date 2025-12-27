/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:54:35 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 11:33:23 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if ((!lst) || (!*lst && !new))
		return ;
	if (*lst == NULL)
		*lst = ft_lstnew(new -> content);
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}
