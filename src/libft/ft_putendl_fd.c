/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:01:37 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 10:55:34 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft send the string(str) to the file descriptor and add a "\n". 
 * This function don't have return.
 * The file descriptor is an id of the file where I want to write.
 * @param str The char to copy.
 * @param file_descriptor The "file descriptor" of the file.
 * @return Nothing
*/
void	ft_putendl_fd(char *str, int file_descriptor)
{
	if (!str)
		return ;
	ft_putstr_fd(str, file_descriptor);
	write(file_descriptor, "\n", sizeof(char));
}

// int	main(void)
// {
// 	int	fd;	
// 	fd = open("example.txt", O_WRONLY);
// 	if (fd == -1)
// 		return (0);
// 	ft_putendl_fd("hola mundo como estas", fd);
// 	close(fd);
// 	return(0);
// }