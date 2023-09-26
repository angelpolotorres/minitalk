/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:28:22 by apolo-to          #+#    #+#             */
/*   Updated: 2023/08/18 07:18:23 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

size_t	ft_strlen_gnl(const char *str);
char	*ft_strchr_gnl(const char *str, int c);
char	*ft_strjoin_gnl(char *prev_line, char *buffer);
size_t	ft_strlcpy_gnl(char *dest, const char *src, size_t size);
char	*get_next_line(int fd);

#endif