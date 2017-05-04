/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:58:29 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/27 19:30:29 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	if (d < s)
		return (ft_memcpy(d, s, len));
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
