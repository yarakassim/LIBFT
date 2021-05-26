/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:53:54 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/26 16:09:27 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 == *str2 && n)
	{
		n--;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
int main()
{
	int a[20] = {34, 7, 4, 90};
	int b[20] = {34, 7, 88};
	printf("%d\n", ft_memcmp(a, b, 12));
	return 0;
}
