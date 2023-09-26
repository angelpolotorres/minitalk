/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:58:00 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/16 16:05:41 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft takes a new node and put as the first node of a list.
 * @param **lst A pointer to first list node.
 * @param *new Pointer to the new node
 * @return A pointer to the last list node. 
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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

// 	first_node = ft_lstnew("hola mundo");
// 	ft_lstadd_front(&first_node, ft_lstnew("adios mundo"));
// 	ft_print_list(first_node);
// 	return (0);
// }
