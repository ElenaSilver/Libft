/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 16:40:41 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/29 20:38:17 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrev(char *str)
{
	int		i;
	int		j;
	char	str2;

	i = 0;
	j = -1;
	while (str[i] != '\0')
		i++;
	while (++j < --i)
	{
		str2 = str[j];
		str[j] = str[i];
		str[i] = str2;
	}
	return (str2);
}
