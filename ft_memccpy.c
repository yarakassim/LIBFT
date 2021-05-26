/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:27:13 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/26 15:36:20 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (unsigned char *)src;

	while (n)
	{
		*d = *s;
		if (*d == (unsigned char)c)
		{
			d++;
			return d;
		}
		n--;
		d++;
		s++;
	}
	return NULL;
}
int main()
{
	char s[20] = "hello";
	char d[20] = "parapluie";
	printf("%s\n", ft_memccpy(d, s, 'e', 6));
	printf("%s\n", d);
	return 0;
}
