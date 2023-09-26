/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:34:42 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 10:54:59 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_delone(void *content)
// {
// 	printf("\nEJECUTO EL DEL");
// }

/**
 * This ft delete the content of a node and later free the memory of this node.
 * After, free the node except the next.
 * @param *lst A pointer to the node.
 * @param (del*)(void*) The ft to delete the node.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*new_node;
// 	void	(*del)(void *content) = &ft_delone;

// 	new_node = ft_lstnew("hola mundo");
// 	printf("\n%s", new_node->content);
// 	ft_lstdelone(new_node, del);
// 	printf("\n%s", new_node->content);
// }
