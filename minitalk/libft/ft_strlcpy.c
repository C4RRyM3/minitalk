/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:20:50 by mbass             #+#    #+#             */
/*   Updated: 2021/11/03 00:54:33 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	len = 0;
	while (src[len] && len < size - 1)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	len = 0;
	while (src[len])
		len++;
	return (len);
}
