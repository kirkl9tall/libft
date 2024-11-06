/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	int		x;

	x = 0;
	p = malloc(strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	while (s[x])
	{
		p[x] = s[x];
		x++;
	}
	p[x] = '\0';
	return (p);
}
/*
int main ()
{
	char  *arr = "abdcefghijk";

	//printf("%s\n",arr);
	printf("%s\n",ft_strdup(arr));


}*/
