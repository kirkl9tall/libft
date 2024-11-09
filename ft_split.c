/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 16:55:23 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (s[x])
	{
		if ((x == 0 && s[x] != c) || (s[x] != c && s[x - 1] == c))
		{
			count++;
			x++;
		}
		else
			x++;
	}
	return (count);
}

char	**amar(char const *s, char **p, char c, int countty)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 0;
	while (s[x] && countty > 0)
	{
		while (s[x] == c)
			x++;
		while (s[x] && s[x] != c)
		{
			p[z][y++] = s[x++];
		}
		countty--;
		p[z][y] = '\0';
		if (s[x] || p[z])
			z++;
		y = 0;
	}
	p[z] = NULL;
	return (p);
}

void	allocation(char const *s, char **p, char c)
{
	int	x;
	int	y;
	int	w;

	x = 0;
	y = 0;
	w = 0;
	while (s[x])
	{
		while (s[x] == c)
			x++;
		while (s[x] && s[x] != c)
		{
			x++;
			w++;
		}
		if (w > 0)
		{
			p[y] = malloc((w + 1) * sizeof(char));
			y++;
		}
		w = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**p;
	unsigned int	countty;

	if (!s)
	{
		return (NULL);
	}
	countty = count_word(s, c);
	p = malloc((countty + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	allocation(s, p, c);
	return (amar(s, p, c, countty));
}
