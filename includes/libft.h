/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:08:40 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/30 12:49:20 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int arg);
int		ft_isdigit(int arg);
int		ft_isalnum(int arg);
int		ft_isascii(int arg);
int		ft_isprint(int arg);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *dest, int value, size_t leng);
void	ft_bzero(void *dest, size_t leng);
void	*ft_memcpy(void *dest, const void *src, size_t length);
void	*ft_memmove(void *dest, const void *src, size_t length);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int arg);
int		ft_tolower(int arg);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(void *buf, int ch, size_t length);
int		ft_memcmp(const void *s1, const void *s2, size_t length);
char	*ft_strnstr(const char *str_text, const char *str_searched, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t n_items, size_t size_bytes);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *src, unsigned int start, size_t length);
char	*ft_strjoin(char const *str_1, char const *str_2);
char	*ft_strtrim(const char *str, const char *set);
char	**ft_split(const char *str, char sep);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *str, char (*func)(unsigned int, char));
void	ft_striteri(char *str, void (*func)(unsigned int, char*));
void	ft_putchar_fd(char c, int file_descriptor);
void	ft_putstr_fd(char *str, int file_descriptor);
void	ft_putendl_fd(char *str, int file_descriptor);
void	ft_putnbr_fd(int num, int file_descriptor);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void *));

// Funciones nuevas
int		ft_isspace(int c);
int		ft_intlimits(const char *str);
int		ft_issign(int c);
#endif
