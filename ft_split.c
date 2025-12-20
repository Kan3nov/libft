/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:51:32 by klafi             #+#    #+#             */
/*   Updated: 2025/12/20 15:00:40 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s, char c)
{
	size_t	index;
	int		word;
	size_t	len;
	size_t	count;

	len = ft_strlen(s);
	word = 0;
	count = 0;
	index = 0;
	while (index < len)
	{
		if (word == 0 && *(s + index) != c)
		{
			count++;
			word = 1;
		}
		else if (word == 1 && *(s + index) == c)
			word = 0;
		index++;
	}
	return (count);
}

static size_t	range(char *s, char c, size_t idx)
{
	size_t	count;

	count = 0;
	while (*(s + idx) != c && *(s + idx) != 0)
	{
		count++;
		idx++;
	}
	return (count);
}

static char	**split(char const *s, char c, char **str_arr)
{
	size_t	index;
	size_t	index2;
	char	*str;

	index = 0;
	index2 = 0;
	while (*(char *)(s + index))
	{
		if (*(s + index) != c)
		{
			str = ft_substr(s, index, range((char *)s, c, index));
			str_arr[index2++] = str;
			index += range((char *)s, c, index) - 1;
		}
		index++;
	}
	str_arr[index2] = NULL;
	return (str_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;

	if (*s == 0)
		return (NULL);
	str_arr = malloc (sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!str_arr)
		return (NULL);
	str_arr = split(s, c, str_arr);
	return (str_arr);
}
