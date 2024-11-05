#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	sizealloc;

	sizealloc = (nmemb * size);
	ptr = malloc(sizealloc);
	ft_bzero(ptr, sizealloc);
	if (sizealloc == 0 || ptr == NULL)
		return (NULL);
	return (ptr);
}
/*
int main ()
{
int		x = 0;

	int  *p ;
	p = ft_calloc (5,4);
while (x < 5)
{
	printf("%i\n",p[x]);
	x++;
}

}
*/