/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:47:50 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/22 18:40:39 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	len = strlen(s);
	while (i < len)
	{
		s++;
		i++;
	}

	while (i > 0)
	{
		if(*s == c)
			return (char *)s;
		i--;
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

