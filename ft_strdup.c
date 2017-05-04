/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:46:28 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/25 02:24:24 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	s2 = (char *)malloc(sizeof(*s2) * (ft_strlen(s1) + 1));
	if (!s2)
		return (NULL);
	return (ft_strcpy(s2, s1));
}
