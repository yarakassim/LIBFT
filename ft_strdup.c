/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:44:02 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 18:18:01 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup	(const char *s1)
{
	int		i;
	size_t	len;
	char	*dup;

	i = 0;
	len = ft_strlen(s1);
	dup = ft_calloc(len, 1);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}
