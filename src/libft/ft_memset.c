/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:48:00 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 10:04:08 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft fills length bytes starting at dest with the value.
 * This ft is a copy of memset() from <string.h>
 * @param dest A void pointer point to destiny.
 * @param value The value to fill
 * @param length The number of bytes to fill.
 * @return the pointer to dest.
*/
void	*ft_memset(void *dest, int value, size_t length)
{
	size_t	i;
	char	*str_dest;

	i = 0;
	str_dest = dest;
	while (i < length)
	{
		str_dest[i] = value;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str[] = "Hola mundo, buenos días";

// 	printf("\nOrigen: %s\n", str);
// 	memset(str + 2, 'e', 5 * sizeof(char));
// 	printf("\n%s\n", str);
// 	ft_memset(str + 2, 'e', 5 * sizeof(char));
// 	printf("\n%s\n", str);
// 	return (0);
// }
