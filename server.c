/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:02:37 by tbabayan          #+#    #+#             */
/*   Updated: 2022/07/05 15:03:06 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<unistd.h>
#include	<signal.h>

void	receive_bits(int sig)
{
	static unsigned char	c = 0;
	static int				i = 0;

	c = c << 1;
	++i;
	if (sig == SIGUSR1)
		c = c | 1;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	s;

	pid = getpid();
	s.sa_handler = &receive_bits;
	s.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s, NULL);
	sigaction(SIGUSR2, &s, NULL);
	ft_putstr_fd("Server pid - ", 1);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	while (1)
		pause();
}
