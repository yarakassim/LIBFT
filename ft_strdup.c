/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:44:02 by ykassim-          #+#    #+#             */
/*   Updated: 2021/06/04 08:19:00 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup	(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = malloc(sizeof(*s1) * len);
	if (!dup)
		return (NULL);
	if (!(ft_memcpy(dup, s1, len)))
		return (NULL);
	return (dup);
}
