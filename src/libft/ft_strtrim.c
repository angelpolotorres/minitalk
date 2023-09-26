/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:04:48 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/13 21:27:52 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_char_in_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

/**
 * This ft remove the set(str) from the start and the end of a string.
 * Return a new string with the result.
 * @param *str The string.
 * @param *set The string to remove.
 * @return A pointer to the new string
*/
char	*ft_strtrim(char const *str, char const *set)
{
	size_t	str_size;
	char	*new_str;

	if (!str || !set)
		return (NULL);
	while (str)
	{
		if (ft_char_in_set (*str, set))
			str ++;
		else
			break ;
	}
	str_size = ft_strlen(str);
	while (str_size != 0)
	{
		if (ft_char_in_set(str[str_size - 1], set))
			str_size --;
		else
			break ;
	}
	new_str = malloc(str_size * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, (char *)str, str_size + 1);
	return (new_str);
}

// int	main(void)
// {
// 	printf("\n%s", ft_strtrim("hola mundo como estas", "ho"));
// 	printf("\n%s", ft_strtrim("hola mundo como estas", "as"));
// 	printf("\n%s", ft_strtrim("hola mundo como estho", "ho"));
// 	return (0);
// }