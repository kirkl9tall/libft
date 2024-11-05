
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		while (s[x] && s[x] != c)
		{
			p[z][y] = s[x];
			y++;
			x++;
		}
		p[z][y] = '\0';
		while (s[x] == c)
			x++;
		if (s[x])
			z++;
		y = 0;
	}
	p[z] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		x;
	int		y;
	int		w;
	int		count;

	x = 0;
	y = 0;
	w = 0;
	count = count_word(s, c);
	p = malloc((count_word(s, c) + 1) * sizeof(char *));
	while (s[x])
	{
		while (s[x] && s[x] != c)
		{
			x++;
			w++;
		}
		while (s[x] == c)
			x++;
		p[y] = malloc((w + 1) * sizeof(char));
		y++;
		w = 0;
	}
	return (amar(s, p, c));
}

int	main(void)
{
	char	s[] = "   ter   tert   ";
	char	c;

	c = ' ';
	ft_split(s, c);
}
