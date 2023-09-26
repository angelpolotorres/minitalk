/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:17:18 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 13:24:05 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft contiguosly allocates enough space for n object of size_bytes.
 * The allocated memory is filles with bytes of value zero.
 * This ft is a copy of calloc() from <stdlib.h>
 * @param n_items Number of items
 * @param size_bytes The size of bytes for any element.
 * @return A pointer to this part of memory.
*/
void	*ft_calloc(size_t n_items, size_t size_bytes)
{
	void	*res;

	res = (void *)malloc(n_items * size_bytes);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, (n_items * size_bytes));
	return (res);
}

// int	main(void)
// {
// 	void *res;
// 	res = ft_calloc(5, sizeof(int));
// 	printf("\nrespuesta: %s", res);
// 	return (0);
// }