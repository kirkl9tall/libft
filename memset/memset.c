#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, int n )
{
	int x;
	char *p = (char *)s;
	x = 0;
	while (x < n)
		p[x++] = (char)c;
	return (s);
}
/*
int main()
{
	char str[] = "Hello!";
	int c  = 49;
	size_t n = 7;
	printf("%s\n",(char*)ft_memset(str,c,n));
	printf("%s\n",(char*)ft_memset1(str,c,n));
	printf("%s\n",(char*)memset(str,c,n));
}*/
