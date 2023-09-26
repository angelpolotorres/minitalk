/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:48:41 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 13:14:08 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft locates the first occurrence of ch (converted to an unsigned char) 
 * in the first length bytes of the buffer pointed to by buf. 
 * This ft is a copy of memchr() from <string.h>
 * @param *buf The bufer that you want to search
 * @param ch The character.
 * @param length The number of bytes to search in the buffer.
 * @return A pointer to the located character, or NULL if ch couldn't be found. 
*/
void	*ft_memchr(void *buf, int ch, size_t length)
{
	unsigned char	*str;
	unsigned char	c;
	size_t			i;

	i = 0;
	str = (unsigned char *)buf;
	c = (unsigned char)ch;
	while (i < length)
	{	
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[]="Hola mundo como estas esta mañana";
// 	char  c = 'a';
// 	int count = 10;

// 	printf("\n%s", memchr(str,c,count));
// 	return (0);
// }