#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *s)
{
	int x;
	int y;
	char *p;

	x = 0;
	y = 0;
	while (s[y])
		y++;

	p = malloc(y+1);
	while (s[x])
	{
		p[x] = s[x];
		x++;
	}
	p[x] = '\0'; 
	return (p);
}
/*
int main()
{
	char str[] = "Hello Wrold !";	

	printf("%s\n",ft_strdup(str));

}*/
