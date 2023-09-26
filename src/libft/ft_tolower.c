/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:11:37 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 12:52:22 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft convert an uppercase character to lowercase character
 * This ft is a copy of tolower() from <ctype.h>
 * @param arg An uppercase alphabetic character (int)
 * @return Return a character (int)
*/
int	ft_tolower(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
		return (arg + 32);
	return (arg);
}

// int	main(void)
// {
// 	printf("\n%c", ft_tolower(127));
// 	printf("\n%c", toupper(127));
// 	return (0);
// }