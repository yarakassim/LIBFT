/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:26:11 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/22 17:47:22 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if(*s == c)
			return (char *)s;
		s++;
	}
	
	return NULL;
}

int main()
{
	char str[20] = "string is a string";
	char *p = ft_strchr(str, 'a');
	printf("%s\n", p);
	return 0;
}
