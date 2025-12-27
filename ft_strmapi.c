/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:58:17 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 13:29:33 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	char			*new;

	idx = 0;
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[idx])
	{
		new[idx] = (*f)(idx, s[idx]);
		idx++;
	}
	new[idx] = 0;
	return (new);
}
