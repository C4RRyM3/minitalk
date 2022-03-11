/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:38:48 by mbass             #+#    #+#             */
/*   Updated: 2022/03/11 19:53:47 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putstr_fd(char const *str, int fd)
{
        size_t  i;

    i = 0;
    if (str)
    {
        while (str[i] != 0)
        {
            write (fd, &str[i], 1);
            i++;
        }
    }
}

void	ft_putchar_fd(char const *str, int fd)
{
    write(fd, &str, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
    unsigned int	nbr;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = n * -1;
    }
    else
        nbr = n;
    if (nbr >= 10)
        ft_putnbr_fd(nbr / 10, fd);
    ft_putchar_fd((nbr % 10) + '0', fd);
}
