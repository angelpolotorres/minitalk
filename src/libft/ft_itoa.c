/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:40:01 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/15 10:12:06 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long num)
{
	size_t	i;

	i = 1;
	if (num < 0)
	{
		num = num * -1;
		i ++;
	}
	while (num > 9)
	{
		num = num / 10;
		i ++;
	}
	return (i);
}

static void	ft_num_to_char(long num, char *res, size_t *i)
{
	if (num > 9)
	{
		ft_num_to_char(num / 10, res, i);
		ft_num_to_char(num % 10, res, i);
	}
	else
	{
		res[*i] = num + '0';
		(*i)++;
	}
}

/**
 * This ft convert an Int to an string. 
 * Return a string with the result.
 * @param int The number
 * @return a String with the result
*/
char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	size_t	i;

	num = n;
	res = malloc(sizeof(char) * (ft_num_len(num) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		res[i] = '-';
		num = num * -1;
		i ++;
	}
	ft_num_to_char(num, res, &i);
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	printf("\n%s", ft_itoa(-34567));
// 	return (0);
// }