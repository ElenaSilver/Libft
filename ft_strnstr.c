/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 23:22:33 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/28 05:19:28 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	len2;

	len2 = ft_strlen(lit);
	if (!len2)
		return (char *)big;
	while (*big != '\0' && len >= len2)
	{
		if (!ft_memcmp(big, lit, len2))
			return (char *)big;
		big++;
		len--;
	}
	return (NULL);
}
