/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	if (dest > src && dest < src + n)
	{
		x = n;
		while (x > 0)
		{
			((unsigned char *)dest)[x - 1] = ((unsigned char *)src)[x - 1];
			x--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	int n = 5;
	char  src[] = "Hello, world!";
	//printf("%s",(char*)memmove(src+2, src+4,n));
	ft_memmove(src+4, src+6,n);
	printf("%s\n",src);
}*/
