/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:36:00 by mbass             #+#    #+#             */
/*   Updated: 2021/11/02 22:43:23 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const unsigned char	*i;

	i = (const unsigned char *)arr;
	while (n--)
	{
		if (*i == (unsigned char)c)
			return ((void *)i);
		i++;
	}
	return (0);
}
