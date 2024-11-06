/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		x;
	int		y;

	x = start;
	y = 0;
	p = malloc(len + 1);
	if (p == NULL || start > strlen(s))
		return (NULL);
	while (y < len && ((start + y) < (strlen(s))))
	// a revoir  the second condition .
	{
		p[y] = s[x];
		x++;
		y++;
	}
	p[y] = '\0';
	return (p);
}
/*
int main ()
{
	char  arr[] = "abcdefjhijk";
	int srart = 8;
	int len  = 8;
	printf("%s\n",ft_substr(arr,srart,len));
}*/
