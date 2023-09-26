/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:44:35 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 09:36:09 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft check if the argument is an printable character (32-126)
 * This ft is a copy of isprint() from <ctype.h>
 * @param arg An integer ascii number (127) or a character ('a')
 * @return Return 1 for true and 0 for false.
*/
int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("\n%d", isprint('a'));
// 	printf("\n%d", isprint(17));
// 	printf("\n%d", isprint(127));
// 	printf("\n%d", ft_isprint('a'));
// 	printf("\n%d", ft_isprint(17));
// 	printf("\n%d", ft_isprint(127));
// 	return(0);
// }