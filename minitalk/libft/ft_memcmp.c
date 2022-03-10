/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:28:18 by mbass             #+#    #+#             */
/*   Updated: 2021/10/31 17:34:12 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*k1;
	const unsigned char	*k2;

	k1 = (const unsigned char *)s1;
	k2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*k1 != *k2)
			return (*k1 - *k2);
		k1++;
		k2++;
	}	
	return (0);
}
