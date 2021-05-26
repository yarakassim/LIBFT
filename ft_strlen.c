/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:56:41 by ykassim-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/26 16:00:16 by ykassim-         ###   ########.fr       */
=======
/*   Updated: 2021/05/25 10:32:10 by ykassim-         ###   ########.fr       */
>>>>>>> 77f53a2256c6baa4787f2bea3acfa41aaacc8d62
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
<<<<<<< HEAD
	while (s[i])
=======
	while (s[i] != '\0')
>>>>>>> 77f53a2256c6baa4787f2bea3acfa41aaacc8d62
	{
		i++;
	}
	return (size_t)i;
}

int main()
{
	const char str[60] = "badhello";
	printf("%zu\n", ft_strlen(str));
	return 0;
}
