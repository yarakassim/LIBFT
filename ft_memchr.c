/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:33:59 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/26 15:36:45 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;

	while (n)
	{
		if (*str == (unsigned char)c)
			return str;
		n--;
		str++;
	}
	return NULL;
}
int main()
{
	char a[20] = "parapluie";
	printf("%s\n", ft_memchr(a, 'a', 10));
	return 0;
}
