/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:33:22 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/29 10:02:54 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf.h"
#include "libft.h"
#include <signal.h>

t_message	g_letter;

/**
 * This ft handle bit signals and transforms to chars then print the message.
 * @param	int signal	: The signal.
*/
static void	signal_handler(int signal)
{
	if (signal == SIGUSR1)
		g_letter.bits |= 1;
	g_letter.pos++;
	if (g_letter.pos < 8)
		g_letter.bits <<= 1;
	else
	{
		if (g_letter.bits == 0)
			ft_printf("\nServer listening ...\n");
		else
			ft_printf("%c", g_letter.bits);
		g_letter.bits = 0;
		g_letter.pos = 0;
	}
}

/**
 * This ft printf the PID server and wait for messages.
*/
int	main(void)
{
	ft_printf("PID -> %s\n", ft_itoa(getpid()));
	g_letter.bits = 0;
	g_letter.pos = 0;
	signal(SIGUSR1, &signal_handler);
	signal(SIGUSR2, &signal_handler);
	ft_printf("Server listening ...\n");
	while (1)
		pause();
}
