/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (n == 0 || dest == src)
		return (dest);
	x = 0;
	while (x < n)
	{
		((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return ((unsigned char *)dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int dest[50];
	int  src[] = {89653,1};
	int n =  1;
	int x = 0;
	ft_memcpy(dest,src,1);
	for ( x  ; x < 2 ; x++)
		printf("%d\n",dest[x]);

	char dest2[50];
	char  *src2 = "";
	ft_memcpy(dest2,src2,0);
	printf("%s\n",dest2);
}*/
