/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:30:41 by ykassim-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/26 15:42:42 by ykassim-         ###   ########.fr       */
=======
/*   Updated: 2021/05/25 14:39:46 by ykassim-         ###   ########.fr       */
>>>>>>> 77f53a2256c6baa4787f2bea3acfa41aaacc8d62
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset (void *b, int c, size_t len)
{
	unsigned char *rep;

	rep = (unsigned char *)b;
	while (len > 0)
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
