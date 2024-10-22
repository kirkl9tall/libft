#include <stdio.h>

void *ft_bzero(void *s,size_t n)
{
	int x = 0;
	char *p = (char*)s;
	while (x < n )
		p[x++] = '\0';
	return(s);
}
/*
int main ()
{
	char str[] = "Hello!";
	size_t n = 2;

	printf("%s\n",((char *)ft_bzero(str,n)));
}
*/
