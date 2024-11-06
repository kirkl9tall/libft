/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		((unsigned char *)s)[x] = (unsigned char)c;
		x++;
	}
	return (s);
}
/*
int main  ()
{


	int  arr[5]={0,0,0,0};
	int x = 1;
	//    ft_memset(arr+1,190,5);    ft_memset(arr ,190,1)
		// ft_memset(arr ,0,3);
	ft_memset(arr+1,5,2);
	ft_memset(arr+1,57,1);
//	ft_memset(arr,0,3);
//	ft_memset(arr,0,4);
//1337

	for  (int i = 0 ; i <4; i++)
		printf("[%d]\n",arr[i]);
}*/
