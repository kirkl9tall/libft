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
	char	*p;
	int		x;
	unsigned int		y;
	unsigned int	ls;

	ls = ft_strlen((char *)s);
	x = start;
	y = 0;
	if (!s || len == 0)
		return (NULL);
	p = malloc(len + 1);
	if (p == NULL || start >= ls)
		return (NULL);
	while (y < len && ((start + y) < ls))
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
	char  arr[] = "";
	int srart = 8;
	int len  = 5;
	printf("%s\n",ft_substr(arr,srart,len));

}*/
