/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/11 11:40:06 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!big)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[x] && x + y < len)
	{
		y = 0;
		while (little[y] && big[x + y] && little[y] == big[x + y] && x
			+ y < len)
		{
			y++;
		}
		if (little[y] == '\0')
			return ((char *)&big[x]);
		x++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	sb[] = "hjhjhjh";
	char	sl[] = "th";
	size_t	len;

	len = 3;
	printf("%s\n", ft_strnstr(sb, sl, len));
}*/
