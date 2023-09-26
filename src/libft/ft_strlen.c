/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:08:03 by apolo-to          #+#    #+#             */
/*   Updated: 2023/04/03 11:27:41 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft count the size of a string.
 * This ft is a copy of strlen() from <string.h>
 * @param str A string
 * @return Return an size_t value (ej: 13)
*/
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	//printf("\n%lu", strlen(NULL));
// 	printf("\n%lu", ft_strlen(NULL));
// 	return (0);
// }
