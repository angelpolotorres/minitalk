/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:58:51 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 09:34:59 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft check if th arg is and alphabet or a numeric character.
 * (a-z, A-Z, 0-9) 
 * This ft is a copy of isalnum() from <ctype.h>
 * @param arg An Integer ascii number
 */
int	ft_isalnum(int arg)
{
	if (ft_isdigit(arg) == 1 || ft_isalpha(arg) == 1)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("\n%d", ft_isalnum(';'));
// 	printf("\n%d", isalnum(';'));
// 	return (0);
// }
