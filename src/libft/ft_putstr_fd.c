/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:27:42 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 10:55:44 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft send the string(str) to the file descriptor. 
 * This function don't have return.
 * The file descriptor is an id of the file where I want to write.
 * @param str The char to copy.
 * @param file_descriptor The "file descriptor" of the file.
 * @return Nothing
*/
void	ft_putstr_fd(char *str, int file_descriptor)
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		ft_putchar_fd(str[i], file_descriptor);
		i ++;
	}
	return ;
}

// int	main(void)
// {
// 	int	fd;	
// 	fd = open("example.txt", O_WRONLY);
// 	if (fd == -1)
// 		return (0);
// 	ft_putstr_fd("hola mundo como estas", fd);
// 	close(fd);
// 	return(0);
// }