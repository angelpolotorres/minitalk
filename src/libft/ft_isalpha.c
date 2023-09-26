/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:50:07 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 09:33:55 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft check if the argument is an alphabet character (a-z and A-Z)
 * This ft is a copy of isalpha() from <ctype.h>
 * @param arg An integer ascii number (97) or a character ('a')
 * @return Return 1 for true and 0 for false.
*/
int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("\n%d", ft_isalpha(322));
// 	printf("\n%d", isalpha(322));
// 	return (0);
// }
