/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:33:22 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/28 15:52:43 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf.h"
#include "libft.h"
#include <signal.h>

t_message	letter;

// static void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

static void signal_handler(int signal)
{
	if (signal == SIGUSR1)
	{
		ft_printf("1");
		letter.bits |= 1;
	}
	else
		ft_printf("-0");
	letter.pos++;
	if (letter.pos < 8)
		letter.bits <<= 1;
	else
	{
		if (letter.bits == 0)
			ft_printf("\nMessage recived!\n");
		else
			ft_printf("%c", letter.bits);
		letter.bits = 0;
		letter.pos = 0;
	}
}

int	main(void)
{
	ft_printf("PID:\t%s\n", ft_itoa(getpid()));
	letter.bits = 0;
	letter.pos = 0;
	signal(SIGUSR1, &signal_handler);
	signal(SIGUSR2, &signal_handler);
	ft_printf("Server listening ...\n");
	while(1)
		pause();
}