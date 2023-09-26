/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:54:34 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 12:25:38 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy a number of characters (size) from a source (src) to a destiny (dest)
 * This ft is a copy of strlcpy() from <string.h>
 * @param dest Destiny string
 * @param src Source string
 * @param size Number of characters to copy
 * @return Return an size_t value of src
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (ft_strlen((char *)src));
}

// int main()
// {
// 	char dest[] = "Hola mundo como estas";
// 	char src[] = "angel";
// 	printf("\n%lu", strlcpy(dest, src, 0));
// 	printf("\n%lu", ft_strlcpy(dest, src, 0));
// 	printf("\n%s", dest);
// 	printf("\n%c", dest[6]);

// 	return 0;
// }