/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:50:45 by klafi             #+#    #+#             */
/*   Updated: 2025/12/17 15:26:19 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in(char *haystack, char needle)
{
	size_t	start;

	start = 0;
	while (*(haystack + start))
	{
		if (*(haystack + start) == needle)
			return (1);
		start++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	trim_count;
	size_t	index;
	char	*new;

	index = 0;
	trim_count = 0;
	while (in((char *)set, *(s1 + index)))
	{
		trim_count++;
		index++;
	}
	start = index;
	index = ft_strlen(s1) - 1;
	while (in((char *)set, *(s1 + index)))
	{
		trim_count++;
		index--;
	}
	new = malloc(ft_strlen(s1) - trim_count + 1);
	new = ft_substr(s1, start, index - start + 1);
	return (new);
}
