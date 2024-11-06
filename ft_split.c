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

int	count_word(char *s, char c)
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
		x++;
	}
	return (count);
}

char	**amar(char *s, char **p, char c)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 0;
	while (s[x])
	{
		while (s[x] == c)
			x++;
		while (s[x] && s[x] != c)
		{
			p[z][y] = s[x];
			y++;
			x++;
		}
		p[z][y] = '\0';
		if (s[x])
			z++;
		y = 0;
	}
	p[z] = '\0';
	return (p);
}

void	freealloc(void **p, int y)
{
	while (y > 0)
	{
		free(p[y - 1]);
		y--;
	}
	free(p);
	return ;
}

void	allocation(char const *s, void **p, char c)
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
		p[y] = malloc((w + 1) * sizeof(char));
		if (p[y] == NULL)
		{
			freealloc(p, y);
			return ;
		}
		y++;
		w = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	p = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	allocation(s, p, c);
	if (p == NULL)
		return (NULL);
	return (amar(s, p, c));
}
