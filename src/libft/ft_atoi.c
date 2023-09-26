/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:07:27 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 15:37:14 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft transform a string of digits to a integer. 
 * The symbol '-' is interpreted like a negative number.
 * This ft is a copy of atoi() from <stdlib.h>
 * @param str A string of digits
 * @return A (+-)integer. If it fails, it returns zero. 
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i ++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	printf("\n%i", atoi(" -45"));
// 	printf("\n%i", ft_atoi(" -45"));
// 	return (0);
// }
