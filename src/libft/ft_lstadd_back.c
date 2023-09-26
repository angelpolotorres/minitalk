/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:10:34 by apolo-to          #+#    #+#             */
/*   Updated: 2023/02/20 10:30:15 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft add a new node at the end of the list.
 * @param *lst The list (the first node of the list).
 * @param *new The new node.
 * @return A pointer to the last list node. 
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
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
// 	t_list	*lst;
// 	t_list	*new;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	new->content = "deberia ser el último";
// 	lst = ft_lstnew("hola mundo");
// 	ft_lstadd_front(&lst, ft_lstnew("adios mundo"));
// 	ft_lstadd_front(&lst, ft_lstnew("que tal mundo"));
// 	ft_lstadd_back(&lst, new);
// 	ft_print_list(lst);
// 	return (0);
// }
