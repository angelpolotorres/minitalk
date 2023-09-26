/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:04:35 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 10:15:40 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft copies length bytes from src to dest. 
 * This ft is a copy of memcpy() from <string.h>
 * @param dest A void pointer point to the destiny.
 * @param src A void pointer point to the source.
 * @param length The number of bytes to fill.
 * @return the pointer to the destiny.
*/
void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	size_t		i;
	const char	*str_src;
	char		*str_dest;

	i = 0;
	str_src = src;
	str_dest = dest;
	if (!dest && !src)
		return (NULL);
	while (i < length)
	{
		str_dest[i] = str_src[i];
		i ++;
	}
	return (dest);
}

// int main(void)
// {
// 	char str[100] = "Hola mundo como estais";
// 	char str2[100] = "Hola mundo como estais";
// 	memcpy(str + 5, str, 10);
// 	ft_memcpy(str2 + 5, str2, 10);
// 	printf("\n%s", str);
// 	printf("\n%s", str2);
// 	return (0);
// }