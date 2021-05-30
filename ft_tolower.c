/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:14:59 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 18:28:39 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_tolower	(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}
