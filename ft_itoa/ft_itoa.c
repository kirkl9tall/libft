#include <unistd.h>
#include <stdlib.h>

char *ft_itoa(int val,char *str, int radix)
{	
	int	x;
	char *p;

	x = sizeof (p - 1);
	p = malloc(33);
	while (val != 0)
	{
		p[x--] = (val % radix) + 48;
		val = val / radix;
	}
	x = 33;
	p[x] = '\0';

	return (p);
}
int main()
{

        int a = 13284983;
        int base = 2;
        int x;
        char *p;
	p = ft_itoa(a,p,base);
        x = 0;
         while (x <= sizeof(p) )
                 write (1,&p[x++],1);
         write (1,"\n",1);

}
