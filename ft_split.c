/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:51:32 by klafi             #+#    #+#             */
/*   Updated: 2025/12/17 16:49:47 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_words(char *s, char c)
{
	size_t	index;
	int		word;
	size_t	len;
	size_t	count;
	
	if (*s == 0)
		return (1);
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

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	index;
	size_t	index2;
	char	*str;

	index = 0;
	index2 = 0;
	str_arr = malloc (sizeof(char *) * (count_words((char *)s, c) + 1));
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
	if (*s == 0)
		str_arr[index2++] = (char *)s;
	str_arr[index2] = NULL;
	return (str_arr);
}

int main(void)
{
	char *s = "hello world my name is kanana";
	char **meow = ft_split(s, 'o');
	size_t 	index = 0;

	while (meow[index])
	{
		printf("%s\n", meow[index]);
		index++;
	}
	return (0);
}
