/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:44:02 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 15:42:51 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (size_t)i;
}
void *ft_calloc(size_t count, size_t size)
{
	int i;
	unsigned char *p;

	i = 0;
	p = malloc(count * size);
	while (p[i])
	{
		p[i] = '\0';
		i++;
	}
	return (void *)p;
}
char *ft_strdup(const char *s1)
{
	int i;
	size_t len;
	char *dup;

	i = 0;
	len = ft_strlen(s1);
	dup = ft_calloc(len, 1);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	return dup;
}
/* int main(int ac, char **av)
{
	char *d;
	d = ft_strdup(av[1]);
	printf("%s\n", d);
	return 0;
}
*/
