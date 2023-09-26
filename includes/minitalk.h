/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:19 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/26 13:19:07 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <stdio.h> 

enum e_error{
	OK = 0,
	E_PARAMS_NO_VALID = 1,
	E_PID_INVALID = 2,
};

void	perror_exit(int type_error);
#endif
