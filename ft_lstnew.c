/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:53:02 by ykassim-          #+#    #+#             */
/*   Updated: 2021/06/06 18:46:35 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*five;
	five = (t_list *)malloc(sizeof(*five));
	if (!five)
		return (NULL);
	five->content = content;
	five->next = NULL;
	return (five);
}
