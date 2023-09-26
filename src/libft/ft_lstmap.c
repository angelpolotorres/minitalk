/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:48:14 by apolo-to          #+#    #+#             */
/*   Updated: 2023/04/03 11:30:47 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_delone(void *content)
// {
// 	printf("\nEJECUTO EL DEL");
// }

// void	*ft_function(void *content)
// {
// 	printf("\nEJECUTO EL LA FUNCION");
// 	return (NULL);
// }

/**
 * This ft apply the (*f)ft over the list and creates a new resulting list.
 * The third parameter is a function to delete a node if is necesary.
 * @param *lst A pointer to node.
 * @param *(*f) The function to apply over the list.
 * @param (*del) The funtion to delete the node.
 * @return A pointer to a new list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

// int	main(void)
// {
// 	t_list	*first_node;
// 	void	(*del)(void *content) = &ft_delone;
// 	void	*(*f)(void *content) = &ft_function;
// 	first_node = ft_lstnew("Hola mundo");
// 	ft_lstadd_front(&first_node, ft_lstnew("adios mundo"));
// 	ft_lstmap(first_node, f, del);
// 	return (0);
// }

// posibilidad de que del sea nulo
