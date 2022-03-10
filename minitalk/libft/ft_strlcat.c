/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 00:48:41 by mbass             #+#    #+#             */
/*   Updated: 2021/11/03 00:56:42 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dst[i] && i < len)
		i++;
	while (src[k] && (i + k + 1) < len)
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i < len)
	{	
		dst[i + k] = '\0';
	}
	return (i + ft_strlen((char *)src));
}
