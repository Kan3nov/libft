/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:50:12 by klafi             #+#    #+#             */
/*   Updated: 2025/12/17 14:13:40 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size == 0 || n == 0)
		ptr = malloc(0);
	else if(n * size > UINT_MAX)
		return NULL;
	else
	{
		ptr = malloc(size * n);
		ft_bzero(ptr, size * n);
	}
	return ptr;
}

int main(void)
{
	printf("maximum size :%u \n", UINT_MAX);
	size_t x =  111111111111111;// a value greater than 2^32
	printf("maximum size :%lu \n", x);

	char *meow = calloc(x, 1);
	if (meow == NULL)
		printf("meow is NULL for calloc\n");
	else
		printf("with calloc :    %d\n" , *(unsigned char *)(meow));
	free(meow);
	meow = ft_calloc(x , 1);
	if (meow == NULL)
		printf("meow is NULL for ft_calloc\n");
	else
		printf("with ft_calloc :    %d\n" , *(unsigned char *)(meow));
	free (meow);
	return (0);
}
