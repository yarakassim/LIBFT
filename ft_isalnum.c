/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:18:06 by ykassim-          #+#    #+#             */
/*   Updated: 2021/05/22 15:34:48 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c)
{
	if((ft_isalpha(c) || ft_isdigit(c)))
		return 1;
	else
		return 0;
}

int main()
{
	char str[20] = "123gh++=0)";
	
	printf("%d\n", ft_isalnum(str[1]));
	return 0;
}
