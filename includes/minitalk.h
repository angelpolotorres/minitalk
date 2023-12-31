/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:19 by apolo-to          #+#    #+#             */
/*   Updated: 2023/12/19 15:12:24 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

enum e_error{
	OK = 0,
	E_PARAMS_NO_VALID = 1,
	E_PID_INVALID = 2,
	E_EMPTY_MESSAGE = 3
};

typedef struct s_char
{
	int	bits;
	int	pos;
}t_char;

void	print_error_and_exit(int type_error);
#endif
