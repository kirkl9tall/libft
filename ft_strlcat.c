/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ss;
	size_t	sd;
	size_t	y;

	sd = strlen(dest);
	ss = strlen(src);
	y = 0;
	if (!dest || !src || size == 0)
		return (sd + ss);
	while (src[y] && (sd + y) < size - 1)
	{
		dest[sd + y] = src[y];
		y++;
	}
	dest[sd + y] = '\0';
	return (sd + ss);
}
/*
int	main(void)
{
	char  dest[20] = "012345678";
	char src[] = "012345678";
	printf("return:{%d}\n",strlcat(dest,src,16));
	printf("%s\n",dest);
		char  dest1[] = "012345678";
		char src1[] = "012345678";
	printf("return (:{%d}\n",ft_strlcat(dest1,src1,16)));
	printf("%s\n",dest1);
}*/
