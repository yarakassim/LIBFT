/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:19:03 by ykassim-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/26 15:56:03 by ykassim-         ###   ########.fr       */
=======
/*   Updated: 2021/05/25 16:26:55 by ykassim-         ###   ########.fr       */
>>>>>>> 77f53a2256c6baa4787f2bea3acfa41aaacc8d62
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (unsigned char *)src;

	i = 0;
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return dst;
}
int main(int ac, char **av)
{
	char d[20] = "hello";
	ft_memmove(d+3, d, 5);
	printf("%s\n", d);
	return 0;
}
