/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:41:22 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/26 17:28:36 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "libft.h"

void	send_str(int pid, char *str)
{
	(void)pid;
	(void)str;
	printf("%i\n", 'a' >> 4);
}

int	main(int argc, char **argv)
{
	int	pid;

	pid = 0;
	(void)argv;
	if (argc != 3)
		perror_exit(E_PARAMS_NO_VALID);
	else
		{
			pid = ft_atoi(argv[1]);
			if (!pid)
				perror_exit(E_PID_INVALID);
			send_str(pid, argv[2]);
		}
	return (OK);
}
