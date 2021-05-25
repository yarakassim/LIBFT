/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:15:15 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/25 16:10:15 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t len)
{
	int i;
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (unsigned char *)src;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return dst;
}
int main(int ac, char **av)
{
	char d[20] = "hello";
	ft_memcpy(d+3, d, 5);
	printf("%s\n", d);
	return 0;
}
