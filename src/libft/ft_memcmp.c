/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:58:55 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 13:17:23 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft compares length bytes of the buffer pointed to by s1 
 * to the buffer pointed to by s2. 
 * This ft is a copy of memcmp() from <string.h>
 * @param *s1 String 1
 * @param *s2 String 2
 * @param n Length bytes to compare
 * @return < 0 (s1 is less than s2)
 * @return 0 (s1 is equal to s2)
 * @return > 0 (s1 is greater than s2)
*/
int	ft_memcmp(const void *s1, const void *s2, size_t length)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	size_t			i;

	i = 0;
	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	while (i < length)
	{
		if (str_1[i] != str_2[i])
			return (str_1[i] - str_2[i]);
		i ++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[]="Hola mundo como estas esta mañana";
// 	char str_2[]= "Hole mundo como estas esta mañana";
// 	int count = 10;

// 	printf("\n%i", ft_memcmp(str,str_2,count));
// 	printf("\n%i", memcmp(str,str_2,count));

// 	return (0);
// }