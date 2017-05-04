/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listaddend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:31:36 by eserebry          #+#    #+#             */
/*   Updated: 2017/04/29 20:51:15 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_listaddend(t_list **alst, t_list *new)
{
	t_list *i;

	i = *alst;
	while (i->next != NULL)
		i = i->next;
	i->next = new;
}
