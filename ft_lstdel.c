/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 05:09:12 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/25 06:42:51 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while (*alst != NULL)
	{
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(alst, del);
	}
	*alst = NULL;
}
