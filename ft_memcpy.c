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

	x = 0;
	while (x < n)
	{
		((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dest);
}
/*
int	main(void)
{
	int dest[50];
	int  src[] = {89653,1};
	int n =  1;
	int x = 0;
	ft_memcpy(dest,src,1);
	for ( x  ; x < 2 ; x++)
		printf("%d\n",dest[x]);

	int dest2[50];
		int  src2[] = {1345,12345};
		int n2 =  1;
		int x2 = 0;
	memcpy(dest,src,8);
		for ( x2= 0  ; x2 < 2; x2++)
				printf("%d\n",dest2[x2]);*/
