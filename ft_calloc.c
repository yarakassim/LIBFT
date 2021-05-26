/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:49:18 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/26 16:59:44 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
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
int main()
{
	int c;
	int *t = ft_calloc(5, 4);
	for(c = 0; c < 5; c++)
	{
		printf("%d\n", t[c]);
	}
	return 0;
}
