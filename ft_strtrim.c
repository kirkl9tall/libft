#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	check(const char str, const char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	debut(char const *s1, char const *set)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (s1[x])
	{
		while (set[y])
		{
			if (check(s1[x], set[y]) == 1)
			{
				x++;
				y = 0;
			}
			else
				y++;
		}
		break ;
	}
	return (x);
}

static int	fin(char const *s1, char const *set)
{
	int	y;
	int	z;

	y = 0;
	z = (strlen(s1) - 1);
	while (z > 0)
	{
		while (set[y])
		{
			if (check(s1[z], set[y]) == 1)
			{
				z--;
				y = 0;
			}
			else
				y++;
		}
		break ;
	}
	return (z + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		deb;
	int		fini;
	int		x;
	int		y;
	char	*p;
	int		sl;

	deb = debut(s1, set);
	//     fini = 0;
	//    if ( debut < strlen(s1 ) -1)
	fini = fin(s1, set);
	sl = fini - deb;
	if (sl > 0)
		p = malloc(fini - deb + 1);
	p = malloc(1);
	x = 0;
	y = deb;
	while (y < fini)
		p[x++] = s1[y++];
	p[x] = '\0';
	return ((char *)p);
}
/*
int main ()
{
	char s1[]  = "said 111111 id";
	char set[] = "said";
	printf("%s\n",ft_strtrim(s1,set));
}*/
