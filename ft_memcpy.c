/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:15:15 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/22 13:56:22 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy( void *dest, const void *src, size_t n)
{
	const char *d = dest;
	while (n > 0)
	{
		d = src;
		src++;
		d++;
		n--;
	}
	return dest;
}

int main()
{
  int source[4] = {4, 8, 9, 4};
  int destination[7] = {2, 5, 8, 6, 0, 4, 66};
  /* Printing destination string before memcpy */
  printf("Original String: %d\n", destination[3]);
  /* Copies contents of source to destination */
  ft_memcpy (destination, source, sizeof(source));
  /* Printing destination string after memcpy */
  printf("Modified String: %d\n", destination[3]);

  return 0;
}
