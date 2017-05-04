/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 23:25:21 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/25 06:16:51 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int len1;
	int len2;

	len1 = ft_strlen(big);
	len2 = ft_strlen(little);
	if (!len2)
		return (char *)big;
	while (len1 >= len2)
	{
		if (!memcmp(big, little, len2))
			return (char *)big;
		big++;
		len1--;
	}
	return (NULL);
}
