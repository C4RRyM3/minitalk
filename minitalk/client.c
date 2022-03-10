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

void    s_char(int pid, unsigned char byte)
{
    long long count;

    count = 1 << 7;
    while (count)
    {
        if (byte & count)
        {
            if (kill(pid, SIGUSR1) == -1)

        }
        else
        {
            if (kill(pid, SIGUSR2) == -1)

        }
        count >>= 1;
        usleep(40);
        }
}



int main(int argc, char **argv)
{
    if (argc != 3)
        write(1, "./client [server-pid] [message]\n", 32);


}
