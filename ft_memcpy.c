/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:15:15 by ykassim-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/26 15:40:27 by ykassim-         ###   ########.fr       */
=======
/*   Updated: 2021/05/25 16:10:15 by ykassim-         ###   ########.fr       */
>>>>>>> 77f53a2256c6baa4787f2bea3acfa41aaacc8d62
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t len)
{
<<<<<<< HEAD
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (unsigned char *)src;

	while (len)
	{
		*d = *s;
		d++;
		s++;
		len--;
=======
	int i;
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (unsigned char *)src;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
>>>>>>> 77f53a2256c6baa4787f2bea3acfa41aaacc8d62
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
