/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:54:00 by mbass             #+#    #+#             */
/*   Updated: 2022/03/09 17:54:03 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void usage()
{
    ft_putstr_fd("Usage : ./client [PID] [Message]", 1);
    exit(EXIT_FAILURE);
}

void	send_char(char c, pid_t pid)
{
    int	i;

    i = 0;
    while (i < 8)
    {
        usleep(100);
        if (c & 1)
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        c = c >> 1;
        i++;
    }
}

void	send_msg(char *str, pid_t pid)
{
    while (*str)
    {
        send_char(*str, pid);
        str++;
    }
    send_char(*str, pid);
}

int	main(int argc, char **argv)
{
    int		i;
    pid_t	pid;

    i = 0;
    if (argc != 3)
        usage();
    pid = ft_atoi(argv[1]);
    send_msg(argv[2], pid);

    return (0);
}