/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:24:38 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 18:22:56 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat	(char *dst, const char *src, size_t dstsize)
{
	int	dstlen;
	int	srclen;
	int	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	while (src)
	{
		if (i > (int)dstsize - dstlen - 1)
			break ;
		dst[dstlen + i] = *src;
		i++;
		src++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
