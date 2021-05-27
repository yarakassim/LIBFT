/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:33:44 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/27 10:33:49 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset (void *b, int c, size_t len)
{
	unsigned char *rep;

	rep = (unsigned char *)b;
	while (len)
	{
		*rep = (unsigned char)c;
		rep++;
		len--;
	}
	return b;
}

int main()
{
	int m[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	ft_memset(m, 0, 12);
	for (int i = 0; i < 8; i++)
	{
		printf("%d\n", m[i]);
	}

	char str[25] = "hello world";
	ft_memset(str, '*', 3);
	printf("%s\n", str);

	return 0;
}
