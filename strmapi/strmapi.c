#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
        int x;

        x = 0;
        while (s[x])
                x++;
        return (x);
}

char ft_toupper (int x2, char *s)
{
        if (s[x2] >= 97 && s[x2] <= 122)
		s[x2] =  s[x2] - 32;
	return(s[x2]);
}

char *ft_strmapi(char *s,char (*f)( int num, char *))
{
        int x;
        int x2;
	char *p;

	p = malloc(ft_strlen(s) + 1);
	if (p == NULL)
		return NULL;
        x = 0;
        x2 = 0;
        if (s != NULL && f != NULL)
	{
		x = ft_strlen(s);
		while (x2 < x)
		{
                        p[x2] = (*f)(x2,s);
			x2++;
		}
		p[x2] = '\0';
	}
	return (p);
}
 p = malloc(ft_strlen(s) + 1);
        if (p = NULL)
                return(0);
int main ()
{
	char s[] = "Hello little mother fucker !";
	printf("%s\n",ft_strmapi(s,ft_toupper));
}
