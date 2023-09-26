/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:34:37 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 11:11:25 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_function(void *content)
// {
// 	printf("\nEJECUTO EL LA FUNCION");
// }

/**
 * This ft iterates the (f)function over the elements of the list.
 * @param *lst A pointer to the first node.
 * @param (*f)(void*) The ft to apply over the list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	node = lst;
	while (node != NULL)
	{
		(*f)(node->content);
		node = node->next;
	}
}

// int	main(void)
// {
// 	void	(*f)(void *content) = &ft_function;
// 	t_list	*first_node;
// 	first_node = ft_lstnew("Hola mundo");
// 	ft_lstadd_front(&first_node, ft_lstnew("adios mundo"));
// 	ft_lstiter(first_node, f);
// 	return (0);
// }