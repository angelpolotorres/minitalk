/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:28:29 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 09:34:21 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft check if the argument is a numeric character (0-9)
 * This ft is a copy of isdigit() from <ctype.h>
 * @param arg An integer ascii number (53) or a numeric character ('5')
 * @return Return 1 for true and 0 for false.
*/
int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("\n%d", isdigit('5'));
// 	return (0);
// }
