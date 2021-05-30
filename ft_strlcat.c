/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:24:38 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 16:01:27 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return len;
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int dstlen = ft_strlen(dst);
	int srclen = ft_strlen(src);
	int i = 0;

	while (src)
	{
		if(i > (int)dstsize - dstlen - 1)
			break;
		dst[dstlen + i] = *src;
		i++;
		src++;
	}
	dst[dstlen + i] = '\0';
	return dstlen + srclen;
}

/* int main(int ac, char **av)
{
	printf("%zu\n", ft_strlcat(av[1], av[2], 4));
	printf("%s\n", av[1]);
	return 0;
}
*/
