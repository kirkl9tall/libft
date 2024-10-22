#include "size_t.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	x;
	int	y;
	x = 0;
	y = 0;

	while (dest[x])
		x++;
	while(src[y] && y < size)
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = "\0";
	return (size);
}
/*
int main ()
{
	char dest[50];
	const char src[] = "Hello how are you doing ?";
	size_t size = 19;
	printf("size is  : %ld\n",ft_strlcpy(dest,src,size));

}
*/
