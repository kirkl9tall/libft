#include <stdio.h>
#include "size_t.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	x;
	int diff;

	diff = 0;
	x = 0;

	while ((s1[x] || s2[x]) && x < n)
	{
		if (s1[x] != s2[x])
		{
			diff = s1[x] - s2[x];
			return (diff);
		}
		x++;
	}
	return (diff);
}
/*
int main ()
{
	const char s1[] = "AbdelilaH!";
	const char s2[] = "Abdelilah!";
	size_t n = 7;

	printf("the difference is : %d\n",ft_strncmp(s1,s2,n));
}*/
