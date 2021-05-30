/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:47:50 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/30 18:32:19 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr	(const char *s, int c)
{
	int	len;

	len = strlen(s);
	while (s)
	{
		s++;
	}
	while (len)
	{
		if (*s == (char)c)
			return ((char *)s);
		len--;
		s--;
	}	
	return (NULL);
}
