/*#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *s)
{
	int x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

void ft_toupper (int x2, char *s)
{
	if (s[x2] >= 97 && s[x2] <= 122)
	{
		s[x2] =  s[x2] - 32;
		write(1,&s[x2],1);
	}
	else
	write(1,&s[x2],1);
	return;

}
*/
void ft_striteri(char *s,void (*f)( int num, char *))
{
	int x;
	int x2;

	x = 0;
	x2 = 0;
	if (s != NULL && f != NULL)
	{
		x = ft_strlen(s);
		 while (x2 < x)
		 {
			 (*f)(x2,s);
			 x2++;
		 }
		 write (1,"\n",1);
	}
}
/*
int main ()
{
	char s[] = "Hello little mother fucker !";
	ft_striteri(s,ft_toupper);

}*/
