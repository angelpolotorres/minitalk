/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:52:32 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 12:52:11 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft convert an lowercase character to uppercase character
 * This ft is a copy of toupper() from <ctype.h>
 * @param arg An lowercase alphabetic character (int)
 * @return Return a character (int)
*/
int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (arg - 32);
	return (arg);
}

// int	main(void)
// {
// 	printf("\n%c", ft_toupper(127));
// 	printf("\n%c", toupper(127));
// 	return (0);
// }