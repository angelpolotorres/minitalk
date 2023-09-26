/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:15:36 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/16 13:18:47 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft create a list with the first node.
 * @param *content The content of the node.
 * @return A pointer to the first node. 
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
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
// 	t_list	*new_node;

// 	new_node = ft_lstnew("hola mundo");
// 	ft_print_list(new_node);
// 	return (0);
// }
