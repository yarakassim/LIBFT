/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:26:23 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 17:46:43 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha	(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 12))
		return (1);
	else
		return (0);
}
