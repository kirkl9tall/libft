/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		x;
	size_t	y;

	y = ft_strlen((char *)str);
	x = 0;
	if (c == '\0')
		return ((char *)(str + y));
	while (str[x])
	{
		if (str[x] == (char)c)
			return ((char *)str + x);
		x++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hello guys how are you doing ?";
	int			search;
	const char	str1[] = "Hello guys how are you doing ?";
	int			search2;

	search = 'h';
	printf("%s\n", strchr(str, search));
	search2 = 'h';
	printf("%s\n", ft_strchr(str1, search2));
}*/
