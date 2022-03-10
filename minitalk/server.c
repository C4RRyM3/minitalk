/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:54:07 by mbass             #+#    #+#             */
/*   Updated: 2022/03/09 17:54:09 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    if_error(int pid, char *str)
{
    if (str)
        free(str);
    ft_putstr_fd("server: well, its fucked\n", 2);
    kill(pid, SIGUSR2);
    exit(EXIT_FAILURE);
}

void    *print_message(char *str)
{
    ft_putstr_fd(str,1);
    free(str);
    return (NULL);
}

int main(void)
{
    ft_putstr_fd("Server PID: ", 1);
    ft_putnbr_fd(getpid(),1);
    ft_putchar_fd('\n', 1);


}