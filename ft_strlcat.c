/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:31:52 by klafi             #+#    #+#             */
/*   Updated: 2025/12/22 10:52:02 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	length_src;
	size_t	length_dst;
	size_t	size;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	if (dsize > length_dst + length_src)
		dsize = length_dst + length_src + 1;
	size = dsize;
	while (*(dst) && dsize > 0)
	{
		dsize--;
		dst++;
	}
	ft_strlcpy(dst, src, dsize);
	if (size + length_src > length_dst + length_src)
		return (length_src + length_dst);
	return (size + length_src);
}
