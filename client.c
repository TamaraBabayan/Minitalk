/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:01:47 by tbabayan          #+#    #+#             */
/*   Updated: 2022/07/05 14:02:14 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<signal.h>

void	send_bits(pid_t server_pid, char *text)
{
	unsigned int	i;

	while (*text)
	{
		i = 128;
		while (i != 0)
		{
			if (i & *text)
				kill (server_pid, SIGUSR1);
			else
				kill (server_pid, SIGUSR2);
			usleep(100);
			i = i >> 1;
		}
		text++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	server_pid;

	if (argc == 3)
	{
		server_pid = ft_atoi(argv[1]);
		send_bits(server_pid, argv[2]);
	}
}
