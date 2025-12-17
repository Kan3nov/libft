/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:21:12 by klafi             #+#    #+#             */
/*   Updated: 2025/12/17 20:42:34 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_dig(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		count = 1;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static unsigned long	power(unsigned int base, int exp)
{
	unsigned long	result;

	result = 1;
	while (exp-- > 0)
		result *= base;
	return (result);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	idx;
	size_t	len;

	if (n == -2147483648)
		return ("-2147483648");
	len = count_dig(n);
	s = malloc(len + 1);
	idx = 0;
	if (n < 0)
	{
		s[idx++] = '-';
		n *= -1;
		len--;
	}
	while (len >= 1)
		s[idx++] = '0' + n / power(10, len-- - 1) % 10;
	s[idx] = 0;
	return (s);
}
