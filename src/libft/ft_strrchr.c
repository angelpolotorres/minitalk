/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:24:05 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 13:05:40 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft locates the last occurrence of a character in the string.
 * This ft is a copy of strrchr() from <string.h>
 * @param *str The string
 * @param c The caracter to search
 * @return A pointer to the character position
*/
char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*res;

	res = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			res = (char *)&str[i];
		i ++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (res);
}

// int	main(void)
// {
// 	printf("\n%s", strrchr("hola mundo como estas", 'a')); //as
// 	printf("\n%s", ft_strrchr("hola mundo como estas", 'a')); //as
// 	return(0);
// }
