/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:41:22 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/29 09:57:45 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "libft.h"
#include "ft_printf.h"
#include <signal.h>

/**
 * This ft send a bit-by-bit message to a server using kill ft.
 * @param	int pid		: The process id required by kill ft.
 * @param	char* str	: The message
*/
static void	send_message(int pid, char *message)
{
	int	i;

	while (*message != '\0')
	{
		i = 8;
		while (i--)
		{
			if ((*message >> i) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(42);
		}
		message++;
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR2);
		usleep(42);
	}
	ft_printf("Message sent!\n");
}

/**
 * The main ft checks the arguments and calls send_message ft.
*/
int	main(int argc, char **argv)
{
	int	pid;

	pid = 0;
	if (argc != 3)
		print_error_and_exit(E_PARAMS_NO_VALID);
	else
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
			print_error_and_exit(E_PID_INVALID);
		if (ft_strlen(argv[2]) == 0)
			print_error_and_exit(E_EMPTY_MESSAGE);
		send_message(pid, argv[2]);
	}
	return (OK);
}
