/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:26:34 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 09:35:48 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft check if the arg is an ascii caracter (0-127)
 * This ft is a copy of isascii() from <ctype.>
 * @param arg An integer ascii number (135) or a char ('0x80')
 * @return Return 1 for true or 0 for false
 */
int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("\n%d", isascii('a'));
// 	printf("\n%d", isascii('?'));
// 	printf("\n%d", isascii('0x80'));
// 	printf("\n%d", isascii(135));

// 	printf("\n%d", ft_isascii('a'));
// 	printf("\n%d", ft_isascii('?'));
// 	printf("\n%d", ft_isascii('0x80'));
// 	printf("\n%d", ft_isascii(135));

// 	return (0);
// }