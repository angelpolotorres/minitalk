/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:43:53 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 12:22:09 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft copies length bytes from src to dest but avoiding overlapping. 
 * The ft creates a temporal str to avoid overlapping.
 * @param dest A void pointer point to the destiny.
 * @param src A void pointer point to the source.
 * @param length The number of bytes to fill.
 * @return the pointer to the destiny.
*/
void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char	*str_temp;
	char	*str_dest;

	str_temp = (char *) src;
	str_dest = (char *) dest;
	if (!dest && !src)
		return (NULL);
	if (str_dest > str_temp)
	{
		while (length > 0)
		{
			str_dest[length - 1] = str_temp[length - 1];
			length -- ;
		}
	}
	else
	{
		ft_memcpy(str_dest, str_temp, length);
	}
	return (dest);
}

// int main(void)
// {
// 	char str[20] = "Texto de Origen";
// 	char str2[20] = "Texto de Origen";
// 	char str3[20] = "Texto de Origen";

// 	memmove(str + 5, str, 5);
// 	ft_memmove(str2 + 5, str2, 5);
// 	ft_memcpy(str3 + 5, str3, 5);

// 	printf("\n%s", str);
// 	printf("\n%s", str2); 
// 	printf("\n%s", str3);
// 	return (0);
// }
