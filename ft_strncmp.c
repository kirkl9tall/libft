/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (!s1 && !s2)
		return (0);
	while (x < n && s1 && s2)
	{
		if (s1[x] != s2[x])
			return (((unsigned char *)(s1))[x] - ((unsigned char*)(s2))[x]);
		x++;
	}
	return (0);
}
/*
int main  ()
{
	const char s1[] = "i";
	const char s2[] = "";
	size_t  n  = 0  ;
	printf("%d\n",ft_strncmp(s1,s2,n));
	printf("%d",strncmp(s1,s2,n));

}*/
