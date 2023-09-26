/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:57:30 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/08 16:47:19 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	my_func(unsigned int i, char *chr)
// 	{	
// 		*chr = i + '0';
// 		return ;
// 	}

/**
 * This ft apply another function on a string. 
 * This function don't have return.
 * @param *str The string
 * @param *func The ft to apply
 * @return Nothing
*/
void	ft_striteri(char *str, void (*func)(unsigned int, char*))
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		(*func)(i, &str[i]);
		i ++;
	}
	str[i] = '\0';
	return ;
}

// int	main(void)
// {
// 	void (*func)(unsigned int, char*) = &my_func;
// 	char str[] = "hola mundo";
// 	printf("\n%s", str);
// 	ft_striteri(str, func);
// 	printf("\n%s", str);
// 	return (0);
// }