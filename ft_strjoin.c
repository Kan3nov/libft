/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:27:07 by klafi             #+#    #+#             */
/*   Updated: 2025/12/17 14:49:32 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char	*new;
	size_t	index1;
	size_t	index2;

	length = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(length + 1);
	index1 = 0;
	if (!new)
		return (NULL);
	while (index1 < ft_strlen(s1))
	{
		*(new + index1) = *(s1 + index1);
		index1++;
	}
	index2 = 0;
	while (index2 < ft_strlen(s2))
	{
		*(new + index1++) = *(s2 + index2++);
	}
	*(new + index1) = 0;
	return (new);
}
