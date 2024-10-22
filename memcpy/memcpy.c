#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int x; 
	char *p1 =(char *)dest;
	char *p2 =(char *)src;
	x = 0;
	 while (x < n)
	 {
		 p1[x] = p2[x];
		 x++;
	 }
	 p2[x] = '\0';
	return (dest);
}

int main()
{

	char dest[50];
	char src[] = "Hello mother fucker !";

	int n =  22;

	printf("%s\n",(char *)ft_memcpy(dest,src,n));
}
