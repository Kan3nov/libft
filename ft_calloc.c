/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:50:12 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 10:22:26 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total;

	total = size * n;
	if (size == 0 || n == 0)
		ptr = malloc(0);
	else if (total / size != n)
		return (NULL);
	else
	{
		ptr = malloc(size * n);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, size * n);
	}
	return (ptr);
}
