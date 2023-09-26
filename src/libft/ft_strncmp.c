/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncomp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:19:24 by apolo-to          #+#    #+#             */
/*   Updated: 2023/01/26 11:45:33 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft compares up to n characters from the strings pointed to by s1 and s2.
 * This ft is a copy of strncmp() from <string.h>
 * @param *s1 String 1
 * @param *s2 String 2
 * @param n Number of characters to compare
 * @return < 0 (s1 is less than s2)
 * @return 0 (s1 is equal to s2)
 * @return > 0 (s1 is greater than s2)
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1 = "Angel";
// 	char	*s2 = "An";
// 	int		respuesta;

// 	respuesta = ft_strncmp(s1, s2, 3);
// 	printf("%i", respuesta);
// 	return (0);
// }
