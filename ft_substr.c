/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 13:19:46 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	x;
	unsigned int	y;
	unsigned int	ls;

	if (!s)
		return (NULL);
	ls = ft_strlen((char *)s);
	x = start;
	y = 0;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	if (start >= ls || len == 0)
	{
		p[0] = '\0';
		return (p);
	}
	while (y < len && ((start + y) < ls))
		p[y++] = s[x++];
	p[y] = '\0';
	return (p);
}
/*
#include <stdio.h>

int main ()
{
	char  arr[] = "tripouille";
	int srart = 8;
	int len  = 5;
	printf("%s\n",ft_substr(arr,srart,-1));

}*/
