/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 21:45:54 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/29 20:38:16 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		end;
	int		len;
	char	*s2;

	if (!s)
		return (0);
	i = 0;
	end = 0;
	len = ft_strlen(s);
	s2 = ft_strnew(len);
	while (i < len && ft_wspace(s[i]))
		i++;
	if (i >= len)
		return (ft_strnew(0));
	len--;
	while (ft_wspace(s[len]))
		len--;
	len++;
	if (!(s2 = ft_strnew(len - 1)))
		return (0);
	while (i < len)
		s2[end++] = s[i++];
	s2[len] = '\0';
	return (s2);
}
