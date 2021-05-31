/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 08:25:01 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/31 14:17:19 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr	(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		return (NULL);
	i = ft_strlen(s) - start;
	if (i > len)
		i = len;
	str = malloc(sizeof(char) * i + 1);
	ft_strlcpy(str, &s[start], i);
	return (str);
}