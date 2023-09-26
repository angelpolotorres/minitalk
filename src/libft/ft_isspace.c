/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 08:44:44 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/07 09:04:28 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft checks if the char is 'space', \\t, \\n, \\v , \\f or \\r.
 * @param	int c		: The character.
 * @return	int			: 0 (no space), 1(space).
*/
int	ft_isspace(int c)
{
	if (c == 32 || c == 9 || c == 10 || c == 11 || c == 12 || c == 13)
		return (1);
	return (0);
}
