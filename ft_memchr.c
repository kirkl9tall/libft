#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (((char *)s)[x] == (char)c)
			return (((char *)s) + x);
		x++;
	}
	return (NULL);
}
/*
int main  ()
{
	char arr[] = "abcdefjhijk";
	int c = 0;
	size_t n  = 12;
	printf("%s\n",ft_memchr(arr,c,n));

}*/