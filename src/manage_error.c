/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:12:12 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/29 09:53:54 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf.h"
#include <stdlib.h>

static void	only_exit(int type_error)
{
	exit(type_error);
}

void	print_error_and_exit(int type_error)
{
	if (type_error == E_PARAMS_NO_VALID)
		ft_printf("Invalid parameters\n");
	if (type_error == E_PID_INVALID)
		ft_printf("Invalid PID\n");
	if (type_error == E_EMPTY_MESSAGE)
		ft_printf("Empty message\n");
	only_exit(type_error);
}
