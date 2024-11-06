/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*void to_upper(unsigned int index, char *c)
{
	int	x;
	int	x;

	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	x = 0;
	if (!s || !f)
		return ;
	while (s[x])
	{
		f(x, &s[x]);
		x++;
	}
}
/*
int	main(void) {
	char str[] = "hello world";

	ft_striteri(str, to_upper);

	printf("%s\n", str);
}*/
