/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:45:53 by mbass             #+#    #+#             */
/*   Updated: 2021/11/03 01:58:39 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (need[0] == '\0')
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		a = 0;
		while (i + a < len && hay[i + a] == need[a])
		{
			a++;
			if (!need[a])
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (0);
}
