/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:30:41 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/22 17:02:05 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset (void *s, int c, size_t n)
{
	unsigned char *rep;

	rep = (unsigned char *)s;
	while (n > 0)
	{
		*rep = c;
		rep++;
		n--;
	}
	return s;
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
