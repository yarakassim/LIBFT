/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:10:05 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/24 10:30:21 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if(*s1 != *s2)
			return *s1 - *s2;
		s1++;
		s2++;
		n--;
	}
	return 0;
}

int main()
{
	char a[10] = "";
	char b[10] = "";
	printf("%d\n", ft_strncmp(a, b, 3));
	return 0;
}
