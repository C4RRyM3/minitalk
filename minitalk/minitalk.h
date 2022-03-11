/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:38:32 by mbass             #+#    #+#             */
/*   Updated: 2022/03/11 19:49:34 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>

void	ft_putstr_fd(char const *str, int fd);
void	ft_putchar_fd(char const *str, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
