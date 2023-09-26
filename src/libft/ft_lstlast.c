/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:31:55 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/20 10:25:55 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft return the pointer of the last node of a list.
 * @param *lst The list (the first node of the list)
 * @return A pointer to the last list node. 
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// void	ft_print_list(t_list *node)
// {
// 	while (node != NULL)
// 	{
// 		printf("\n%s", node->content);
// 		node = node->next;
// 	}
// }

// int	main(void)
// {
// 	t_list	*first_node;
// 	t_list	*res;

// 	first_node = ft_lstnew("hola mundo");
// 	ft_lstadd_front(&first_node, ft_lstnew("adios mundo"));
// 	ft_lstadd_front(&first_node, ft_lstnew("que tal mundo"));
// 	res = ft_lstlast(first_node);
// 	ft_print_list(first_node);
// 	printf("\nultimo nodo :%s", res->content);
// 	return (0);
// }
