/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:19:59 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 13:21:40 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft search a string (str_searched) inside of a text (str_text).
 * (len) delimite the number of character where the search is done.
 * This ft is a copy of strnstr() from <string.h>
 * @param srt_text Text where the search id done.
 * @param srt_searched The string searched
 * @param len Number of characters
 * @return Return an size_t value of src
*/
char	*ft_strnstr(const char *str_text, const char *str_searched, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (str_searched[0] == '\0')
		return ((char *)str_text);
	i = 0;
	while (str_text[i] && i < len)
	{
		j = 0;
		if (str_text[i] == str_searched[j])
		{
			while (str_text[i + j] == str_searched[j] && (i + j) < len)
			{
				if (str_searched[j + 1] == '\0')
					return ((char *)&str_text[i]);
				j++;
			}
		}
		i ++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("\n%s", ft_strnstr("Holas mundo como al estas pasando", "al", 30));
// 	printf("\n%s", strnstr("Holas mundo como al estas pasando", "al", 30));
// 	return (0);
// }