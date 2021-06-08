/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:24:15 by ykassim-          #+#    #+#             */
/*   Updated: 2021/06/08 07:22:22 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*save;

	if (!*alst)
		*alst = new;
	else
	{
		save = ft_lstlast(*alst)->next;
		ft_lstlast(*alst)->next = new;
		new->next = save;
	}
}
