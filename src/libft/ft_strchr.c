/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:11:58 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 13:01:32 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft looking for a character inside of an string
 * This ft is a copy of strchr() from <string.h>
 * @param *str The string
 * @param c The caracter to search
 * @return A pointer to the character position
*/
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i ++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	printf("\n%s", strchr("hola como estas \n hola mundo", '\n'));
// 	return (0);
// }
// int	main(void)
// {
// 	printf("\n%s", strchr("hola m\0ndi c\0mo es\0as", 256));
// 	printf("\n%s", ft_strchr("hola m\0ndi c\0mo es\0as", 256));
// 	return (0);
// }