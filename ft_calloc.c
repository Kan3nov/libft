/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:50:12 by klafi             #+#    #+#             */
/*   Updated: 2025/12/20 09:44:35 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size == 0 || n == 0)
		ptr = malloc(0);
	else
	{
		ptr = malloc(size * n);
		ft_bzero(ptr, size * n);
	}
	return (ptr);
}
