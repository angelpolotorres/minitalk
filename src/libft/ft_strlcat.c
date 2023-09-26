/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:56:26 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 12:51:34 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy a number of characters (size) from source (src) to destiny (dest)
 * This ft is a copy of strlcat() from <string.h>
 * @param dest Destiny string
 * @param src Source string
 * @param size final size of the resulted string.
 * @return If size < dest_size return src_size + size.
 * @return In other cases return srcc_size + dest_size
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dest_size;
	size_t	i;
	size_t	j;

	src_size = ft_strlen((char *)src);
	dest_size = ft_strlen((char *)dest);
	i = dest_size;
	j = 0;
	if (size == 0)
		return (src_size + size);
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	if (size < dest_size)
		return (src_size + size);
	return (src_size + dest_size);
}

// int main()
// {
// 	char *src = "adios";
// 	char dest[40] = "hola mundo";	
// 	printf("mio: %lu\n", ft_strlcat(dest, src, 13));
// 	printf("\n%s", dest);
// 	return (0);
// }