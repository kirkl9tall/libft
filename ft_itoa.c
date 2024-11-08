/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:48 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:48 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	counter;

	counter = 0;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static char	*printzero()
{
	char	*p;

	p = malloc(2);
	p[0] = '0';
	p[1] = '\0';
	return (p);
}

static char	*negative(int n)
{
	char	*p;
	int		null;
	int		size;

	n = -n;
	size = count(n);
	p = malloc(size + 2);
	null = size;
	while (size > 0)
	{
		p[size] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	p[size] = '-';
	p[null + 1] = '\0';
	return (p);
}

static char	*positive(int n)
{
	char	*p;
	int		null;
	int		size;

	size = count(n);
	p = malloc(size + 1);
	null = count(n);
	while (size > 0)
	{
		p[size - 1] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	p[null] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	int		x;
	char	*p;
	char	*p2;

	if (n == -2147483648)
	{
		x = 0;
		p = malloc(12);
		p2 = "-2147483648";
		while (x < 12)
		{
			p[x] = p2[x];
			x++;
		}
		return (p);
	}
	else if (n == 0)
		return (printzero());
	else if (n < 0)
		return (negative(n));
	else if (n > 0)
		return (positive(n));
	return (NULL);
}
/*
int	main(void)
{
	int	a;

		a = -2147483648;
   printf("%s\n",ft_itoa(a));
}
*/
