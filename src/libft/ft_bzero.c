/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:16 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/21 10:17:08 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft fills length bytes starting at dest with zero null value.
 * This ft is a copy of bzero() from <string.h>
 * @param dest A void pointer point to destiny.
 * @param length The number of bytes to fill.
 * @return void.
*/
void	ft_bzero(void *dest, size_t length)
{
	ft_memset(dest, 0, length);
	return ;
}

// int	main(void)
// {
// 	char dest[] = "hola mundo";
// 	printf("\noriginal: %s", dest);

// 	ft_bzero(dest, 2);
// 	printf("\nfinal: %s", dest);
// 	return (0);
// }
