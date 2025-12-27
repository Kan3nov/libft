/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:32:07 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 11:36:48 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p_ll;

	p_ll = malloc(sizeof (t_list));
	if (!p_ll)
		return (NULL);
	p_ll -> content = content;
	p_ll -> next = NULL;
	return (p_ll);
}
