/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isposneg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:48:38 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/26 08:42:21 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This ft checks if c is + or -
 * @param int c	: Character.
 * @return int	: (1) true, (0) false.
*/
int	ft_isposneg(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}
