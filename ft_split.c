/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 08:05:02 by ykassim-          #+#    #+#             */
/*   Updated: 2021/06/09 11:51:22 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rowcount(char *str, char c)
{
	int	check;
	int	row;

	check = 1;
	row = 0;
	while (*str)
	{
		if (*str == c)
			check = 1;
		else
		{
			if (check == 1)
			{
				row++;
				check = 0;
			}
		}
		str++;
	}
	return (row);
}

int	colcount(char *str, char c)
{
	int	col;

	col = 0;
	while (str[col] && str[col] != c)
	{
		col++;
	}
	return (col);
}

char	**freedom(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (rowcount((char *)s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (rowcount((char *)s, c))
	{
		j = 0;
		while (*s && *s == c)
			s++;
		array[i] = (char *)malloc(sizeof(char) * (colcount((char *)s, c) + 1));
		if (!array[i])
			freedom(array);
		while (*s && *s != c)
			array[i][j++] = *s++;
		array[i][j] = '\0';
		i++;
	}
	array[i] = 0;
	return (array);
}
