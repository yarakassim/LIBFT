/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:47:50 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/26 16:44:20 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strrchr(const char *s, int c)
{
	int len;

	len = strlen(s);
	while (s)
	{
		s++;
	}

	while (len)
	{
		if(*s == (char)c)
			return (char *)s;
		len--;
		s--;
	}
	
	return NULL;
}

int main()
{
	char str[20] = "string is a string";
	char *p = ft_strrchr(str, 's');
	printf("%s\n", p);
	return 0;
}

