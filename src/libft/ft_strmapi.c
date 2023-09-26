/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:11:11 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/23 13:04:00 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	my_func(unsigned int i, char c)
// 	{	
// 		c = i + '0';
// 		return (c) ;
// 	}

/**
 * This ft apply another function on a string. 
 * Return a new string with the result.
 * @param *str The string
 * @param *func The ft to apply
 * @return A pointer to the new string
*/
char	*ft_strmapi(const char *str, char (*func)(unsigned int, char))
{
	size_t	i;
	size_t	length;
	char	*res;

	if (!str)
		return (NULL);
	length = ft_strlen(str);
	res = malloc(sizeof(char) * (length + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*func)(i, str[i]);
		i ++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char (*func)(unsigned int, char) = &my_func;
// 	printf("\n%s", ft_strmapi("hola mundo como estas", func));
// 	return (0);
// }