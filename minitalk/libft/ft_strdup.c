/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:04:57 by mbass             #+#    #+#             */
/*   Updated: 2021/11/02 22:44:16 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!(dest))
		return (0);
	len = 0;
	while (str[len])
	{
		dest[len] = str[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
