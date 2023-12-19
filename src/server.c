/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:33:22 by apolo-to          #+#    #+#             */
/*   Updated: 2023/12/19 15:06:23 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf.h"
#include "libft.h"
#include <signal.h>

t_char	g_char;

/**
 * This ft handle bit signals and transforms to chars then print the message.
 * @param	int signal	: The signal.
*/
static void	signal_handler(int signal)
{
	if (signal == SIGUSR1)
		g_char.bits |= 1;
	g_char.pos++;
	if (g_char.pos < 8)
		g_char.bits <<= 1;
	else
	{
		if (g_char.bits == 0)
			ft_printf("\nServer listening ...\n");
		else
			ft_printf("%c", g_char.bits);
		g_char.bits = 0;
		g_char.pos = 0;
	}
}

/**
 * This ft printf the PID server and wait for messages.
*/
int	main(void)
{
	ft_printf("PID -> %s\n", ft_itoa(getpid()));
	g_char.bits = 0;
	g_char.pos = 0;
	signal(SIGUSR1, &signal_handler);
	signal(SIGUSR2, &signal_handler);
	ft_printf("Server listening ...\n");
	while (1)
		pause();
}
