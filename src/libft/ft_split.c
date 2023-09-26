/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:31:08 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/16 14:34:37 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft split the string(str) using a separator(char).  
 * Save this pieces in an array of strings (char **)
 * @param str The string
 * @param sep The separator
 * @return A pointer to the array of pointers (char **)
*/
static char	**ft_free_array(char **res, size_t word)
{
	while (word > 0)
	{
		word --;
		free(res[word]);
	}
	free(res);
	return (NULL);
}

static size_t	ft_count_words(char const *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep)
			i ++;
		else
		{
			count ++;
			while (str[i] && str[i] != sep)
				i ++;
		}
	}
	return (count);
}

static size_t	ft_count_len_word(char const *str, char sep, size_t i)
{
	size_t	lenght;

	lenght = 0;
	while (str[i] && str[i] != sep)
	{
		lenght ++;
		i ++;
	}
	return (lenght);
}

static char	**ft_split_words(
	char const *str, char sep, char **res, size_t num_words
	)
{
	size_t	i;
	size_t	word;
	size_t	word_position;

	i = 0;
	word = 0;
	while (str[i] && word < num_words)
	{
		word_position = 0;
		while (str[i] == sep)
			i ++;
		res[word] = (char *)malloc
			(sizeof(char) * (ft_count_len_word(str, sep, i) + 1));
		if (res [word] == NULL)
			return (ft_free_array(res, word));
		while (str[i] && str[i] != sep)
			res[word][word_position ++] = str[i ++];
		res[word][word_position] = '\0';
		word ++;
	}
	res[word] = (char *) '\0';
	return (res);
}

char	**ft_split(char const *str, char sep)
{
	char	**res;
	size_t	num_words;

	if (!str)
		return (NULL);
	num_words = ft_count_words(str, sep);
	res = (char **)malloc((num_words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res = ft_split_words(str, sep, res, num_words);
	return (res);
}

// int	main(void)
// {
// 	char	*str = "hola mundo como estas";
// 	char	separator = ' ';
// 	char	**respuesta;
// 	size_t	num_words;
// 	size_t	i;

// 	num_words = ft_count_words(str, separator);
// 	respuesta = ft_split(str, separator);

// 	i = -1;
// 	while (++i < num_words)
// 		printf("\n%s", respuesta[i]);
// 	return (0);
// }
