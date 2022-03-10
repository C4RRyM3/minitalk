/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 00:33:59 by mbass             #+#    #+#             */
/*   Updated: 2021/11/03 00:55:19 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			(((char *)dst)[i] = ((char *)src)[i]);
			i++;
		}
	}
	else if (dst > src)
	{
		while (len > 0)
		{
			(((char *)dst)[len - 1] = ((char *)src)[len - 1]);
			len--;
		}
	}
	return (dst);
}
