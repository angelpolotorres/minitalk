/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:22:37 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 13:26:01 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft allocates sufficient memory for a copy of the string (str),
 * does the copy, and return the pointer to it.
 * @param str The string to copy.
 * @return Return the pointer to the copy of str.
*/
char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	size_str;
	char	*dest;

	size_str = ft_strlen((char *)str);
	dest = (char *)malloc(size_str * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size_str)
	{
		dest[i] = str[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	printf("\n%s", ft_strdup("hola mundo como estas"));
// 	return (0);
// }
