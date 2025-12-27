/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:14:40 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 13:10:37 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*new_str;

	if (len > ft_strlen((char *)(s + start)))
		len = ft_strlen((char *)(s + start));
	if (start > ft_strlen((char *)(s)))
		return (ft_calloc(1, 1));
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	index = 0;
	while (index < len)
	{
		*(new_str + index) = *(s + index + start);
		index++;
	}
	*(new_str + index) = 0;
	return (new_str);
}
