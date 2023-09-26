/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:15:39 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 10:55:40 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft send the int(int) to the file descriptor. 
 * This function don't have return.
 * The file descriptor is an id of the file where I want to write.
 * @param num The int to copy.
 * @param file_descriptor The "file descriptor" of the file.
 * @return Nothing
*/
void	ft_putnbr_fd(int num, int file_descriptor)
{
	size_t	i;
	char	*str_num;

	if (num == INT_MIN)
	{
		ft_putstr_fd("-2147483648", file_descriptor);
		return ;
	}
	str_num = ft_itoa(num);
	if (!str_num)
		return ;
	i = 0;
	while (str_num[i])
	{
		ft_putchar_fd(str_num[i], file_descriptor);
		i ++;
	}
	free(str_num);
	return ;
}

// int	main(void)
// {
// 	int	fd;	
// 	fd = open("example.txt", O_WRONLY);
// 	if (fd == -1)
// 		return (0);
// 	ft_putnbr_fd(235, fd);
// 	close(fd);
// 	return(0);
// }