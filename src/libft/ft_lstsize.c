/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:04:54 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/16 15:59:12 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft return the number of nodes of a list.
 * @param *lst The list (the first node of the list)
 * @return The number of nodes of a list. 
*/
int	ft_lstsize(t_list *lst)
{
	size_t	num_nodes;

	if (!lst)
		return (0);
	num_nodes = 0;
	while (lst)
	{
		num_nodes ++;
		lst = lst->next;
	}
	return (num_nodes);
}

// int	main(void)
// {
// 	t_list	*first_node;

// 	first_node = ft_lstnew("hola mundo");
// 	ft_lstadd_front(&first_node, ft_lstnew("adios mundo"));
// 	ft_lstadd_front(&first_node, ft_lstnew("que tal mundo"));
// 	printf("\n%i", ft_lstsize(first_node));
// 	return (0);
// }
