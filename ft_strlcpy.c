#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;
	int		y;

	y = ft_strlen(src);
	x = 0;
	if (size == 0 || !src)
		return (y);
	while (src[x] && x < size - 1)
	{
		dest[x] = src[x];
		x++;
	}
	if (size > 0)
		dest[x] = '\0';
	return (y);
}
/*
int main ()
{
	char src[10] = "123";
	char dest[10] = "12345";
	printf("%d\n",strlcpy(dest,src,10));
	printf("%s\n",dest);
}*/