/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:56:41 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/22 14:19:55 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t len;
	
	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return len;
}

int main()
{
	const char str[60] = "";
	printf("%zu\n", ft_strlen(str));
	return 0;
}
