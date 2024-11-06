/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (x < len && little[y])
	{
		if (big[x] != little[y])
			y = 0;
		else if ((big[x] == little[y]))
			y++;
		x++;
	}
	if (little[y] == '\0')
		return ((char *)big + (x - y));
	return (NULL);
}
/*
int main ()
{
	char	sb[] = "hahaha shut up! shugand thanks";
	char	sl[] = "shug";
	size_t	len;

	len = 50;
	printf("%s\n",ft_strnstr(sb,sl,len));
}
*/
