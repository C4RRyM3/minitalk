/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:54:07 by mbass             #+#    #+#             */
/*   Updated: 2022/03/11 19:53:52 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int msg)
{
    static char c;
    static int  i;

    i = 0;
    c = 0;

    if (msg == SIGUSR1)
        c += 1 << i;
    i++;
    if (i == 8)
    {
        if (c == '\0')
            ft_putchar_fd('\n', 1);
        else
            ft_putchar_fd(c, 1);
        i = 0;
        c = 0;
    }
}

int main(void)
{
    pid_t	pid = getpid();
    ft_putstr_fd("Server PID: ", 1);
    ft_putnbr_fd(pid, 1);
    write(1, "\n", 1);
    signal(SIGUSR1, handler);
    signal(SIGUSR2, handler);
    while (1);
    return (0);
}