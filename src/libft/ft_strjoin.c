/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:44 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 09:44:39 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft creates a new str and fills it with the union of str1 and str2.
 * @param *str_1 The first string.
 * @param *str_2 The second string.
 * @return A pointer to new_str.
*/
char	*ft_strjoin(char const *str_1, char const *str_2)
{
	char			*new_str;
	unsigned int	i;
	unsigned int	j;

	if (!str_1 || !str_2)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(str_1) + ft_strlen(str_2) + 1));
	if (!new_str)
		return (NULL);
	i = -1;
	j = -1;
	while (str_1[++i])
		new_str[i] = str_1[i];
	while (str_2[++j])
		new_str[i++] = str_2[j];
	new_str[i] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	char	*str1 = "hola mundo ";
// 	char	*str2 = "como estas";

// 	printf("\n%s", ft_strjoin(str1, str2));
// 	return (0);
// }
