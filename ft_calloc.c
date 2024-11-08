/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:48 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:48 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	sizealloc;

	sizealloc = (nmemb * size);
	ptr = malloc(sizealloc);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, sizealloc);
	return (ptr);
}
/*
int main ()
{
int		x = 0;

	int  *p ;
	p = ft_calloc (5,4);
while (x < 5)
{
	printf("%i\n",p[x]);
	x++;
}

}
*/
