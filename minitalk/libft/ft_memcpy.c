/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:58:53 by mbass             #+#    #+#             */
/*   Updated: 2021/11/03 00:17:18 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t	i;

	i = 0;
	if (!destination && !source)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
		i++;
	}	
	return (destination);
}
