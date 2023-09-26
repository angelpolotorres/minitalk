/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:42:41 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 10:55:18 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft send the char(c) to the file descriptor. 
 * This function don't have return.
 * The file descriptor is an id of the file where I want to write.
 * @param c The char to copy.
 * @param file_descriptor The "file descriptor" of the file.
 * @return Nothing
*/
void	ft_putchar_fd(char c, int file_descriptor)
{
	write(file_descriptor, &c, sizeof(char));
}

// int	main(void)
// {
// 	int	fd;	
// 	fd = open("example.txt", O_WRONLY);
// 	if (fd == -1)
// 		return (0);
// 	ft_putchar_fd('a', fd);
// 	close(fd);
// 	return(0);
// }