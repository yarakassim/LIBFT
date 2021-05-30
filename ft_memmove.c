/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:34:56 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 16:03:42 by ykassim-         ###   ########.fr       */
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
		while ((size_t)i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return dst;
}
/* int main(int ac, char **av)
{
	char d[20] = "hello";
	ft_memmove(d+3, d, 5);
	printf("%s\n", d);
	return 0;
}
*/
