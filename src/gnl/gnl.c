/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:26:54 by apolo-to          #+#    #+#             */
/*   Updated: 2023/08/17 16:25:14 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

/**
 * This ft read the txt file and obtain blocks of text with the size of
 * BUFFER_SIZE. When the ft find '\n' stop and return the united text blocks.
 * @param fd The file descriptor of the txt file.
 * @param *static_line An static variable str to save the text obtained.
 * @return A pointer to text obtained.
*/
char	*ft_get_static_line(int fd, char *static_line)
{
	char	*buffer;
	ssize_t	bytes_readed;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_readed = 1;
	while (!ft_strchr_gnl(static_line, '\n') && bytes_readed > 0)
	{
		bytes_readed = read(fd, buffer, BUFFER_SIZE);
		if (bytes_readed == -1)
		{
			free (static_line);
			free (buffer);
			return (NULL);
		}
		buffer[bytes_readed] = '\0';
		static_line = ft_strjoin_gnl(static_line, buffer);
	}
	free (buffer);
	return (static_line);
}

/**
 * This ft obtain the final line removing text after '\n' from static_line.
 * Return a ptr to the final line obtained after clean the static line.
 * @param *static_line Text obtained after use ft_get_static_line.
 * @return A pointer to the final line.
*/
char	*ft_get_final_line(char *static_line)
{
	int		i;
	char	*final_line;

	i = 0;
	if (!static_line[i])
		return (NULL);
	while (static_line[i] && static_line[i] != '\n')
		i++;
	final_line = malloc(sizeof(char) * (i + 2));
	if (!final_line)
		return (NULL);
	i = 0;
	while (static_line[i] && static_line[i] != '\n')
	{
		final_line[i] = static_line[i];
		i++;
	}
	if (static_line[i] == '\n')
		final_line[i++] = '\n';
	final_line[i] = '\0';
	return (final_line);
}

/**
 * This ft obtain the stash removing text after the '\n' from static_line. 
 * Return a ptr to the stash obtained.
 * @param static_line Text obtained after use ft_get_static_line.
 * @return A pointer to stash.
*/
char	*ft_get_static_stash(char *static_line)
{
	char	*stash;
	int		size_stash;
	char	*ptr_start_stash;

	ptr_start_stash = ft_strchr_gnl(static_line, '\n');
	if (!ptr_start_stash)
	{
		free(static_line);
		return (NULL);
	}
	size_stash = (ft_strlen_gnl(ptr_start_stash) + 1);
	stash = malloc(sizeof(char) * size_stash);
	if (!stash)
		return (NULL);
	ft_strlcpy_gnl(stash, ptr_start_stash, size_stash);
	free(static_line);
	return (stash);
}

/**
 * This ft returns a line of a document on each call.
 * The ft shoud safe the reading point to avoid return always the same line.
 * @param fd The file descriptor.
 * @return A pointer to the final line to print.
*/
char	*get_next_line(int fd)
{
	static char	*static_line[1024];
	char		*final_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_line[fd] = ft_get_static_line(fd, static_line[fd]);
	if (!static_line[fd])
		return (NULL);
	final_line = ft_get_final_line(static_line[fd]);
	static_line[fd] = ft_get_static_stash(static_line[fd]);
	return (final_line);
}

// int	main(void)
// {
// 	int	fd1;
// 	int fd2;
// 	int fd3;
// 	char *ptr1;
// 	char *ptr2;
// 	char *ptr3;

// 	fd1 = open("example1.txt", O_RDONLY);
// 	fd2 = open("example2.txt", O_RDONLY);
// 	fd3 = open("example3.txt", O_RDONLY);

// 	if (fd1 <= 0 || fd2 <= 0 || fd3 <= 0)
// 		return (0);

// 	while (1)
// 	{
// 		ptr1 = get_next_line(fd1);
// 		ptr2 = get_next_line(fd2);
// 		ptr3 = get_next_line(fd3);
// 		if (!ptr1 || !ptr2 || !ptr3)
// 			break;

// 		printf("\n%s", ptr1);
// 		printf("\n%s", ptr2);
// 		printf("\n%s", ptr3);

// 		free(ptr1);
// 		free(ptr2);
// 		free(ptr3);
// 	}

// 	close(fd1);
// 	close(fd2);
// 	close(fd3);
// 	return (0);
// }
