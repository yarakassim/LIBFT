/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:32:35 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 15:56:27 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (unsigned char *)src;

	while (len)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	return dst;
}
/* int main(int ac, char **av)
{
	char d[20] = "hello";
	ft_memcpy(d+3, d, 5);
	printf("%s\n", d);
	return 0;
}
*/
