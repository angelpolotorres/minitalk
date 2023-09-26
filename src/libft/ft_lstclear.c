/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:09:55 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/14 11:02:24 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_delone(void *content)
// {
// 	printf("\nEJECUTO EL DEL");
// }

/**
 * This ft delete the entire list starting in *lst.
 * The ft use the function del and free.
 * The final pointer to the list must be NULL.
 * @param **lst Pointer to the first node of the list.
 * @param (del*)(void*) The ft to free the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}

// int	main(void)
// {
// 	t_list	*first_node;
// 	void	(*del)(void *content) = &ft_delone;
// 	first_node = ft_lstnew("hola mundo");
// 	printf("\n%s", first_node->content);
// 	ft_lstclear(&first_node, del);
// }