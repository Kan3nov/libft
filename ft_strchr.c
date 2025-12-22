/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:11:15 by klafi             #+#    #+#             */
/*   Updated: 2025/12/22 10:38:24 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	if (!s)
		return (NULL);
	c = c % 256;
	while (*(s + index) != 0)
	{
		if (*(s + index) == c)
			return ((char *)(s + index));
		index++;
		if (*(s + index) == c)
			return ((char *)(s + index));
	}
	return (NULL);
}
