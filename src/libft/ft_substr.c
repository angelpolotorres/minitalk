/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:05:30 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/07 11:10:45 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft create a substr with the data of str.
 * The ft copy from (start) character by a (length) number of characters.
 * @param *src The source string.
 * @param start Start character of src.
 * @param length Number of characters to copy.
 * @return Return a character (int)
*/
char	*ft_substr(char const *src, unsigned int start, size_t length)
{
	char	*new_substr;
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	if (src_size < start)
	{
		new_substr = malloc(sizeof(char));
		if (new_substr == NULL)
			return (NULL);
		new_substr[0] = '\0';
	}
	else
	{
		if (src_size < start + length)
			length = src_size - start;
		new_substr = malloc(sizeof(char) * (length + 1));
		if (new_substr == NULL)
			return (NULL);
		i = -1;
		while (++i < length)
			new_substr[i] = src[i + start];
		new_substr[i] = '\0';
	}
	return (new_substr);
}

// int	main(void)
// {
// 	printf("\n%s", ft_substr("hola mundo como estas",  3, 5));
// 	return (0);
// }