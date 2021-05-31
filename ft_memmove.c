/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:34:56 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/31 16:44:26 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove	(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst > src)
	{
		len--;
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
