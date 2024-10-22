#include <stdio.h>
#include <stdlib.h>

int sizeof_strs(char **str, int size)
{
	int x;
	int y;
	int length;

	x = 0;
	y = 0;
	while(x < size)
	{
		y = 0;
		while (str[x][y])
		{
			length++;
			y++;
		}
		x++;
	}
	return(length);
}	
char *ft_strcat(int size, char **str, char *sep, char *p)
{
	int	x;
	int	y;
	int 	z;
	int	a;
	x = 0;
	z = 0;
	while(x <size)
	{
		y = 0;
		while (str[x][y])
		{
			p[z] = str[x][y];
			z++;
			y++;
		}
		a = 0;
		while (sep[a] && x < size - 1)
		{
			p[z] = sep[a];
			z++;
			a++;
		}
		x++;

	}
	return (p);

}
char *strjoin(char **str , char *sep ,int size)
{
	char *p;
	p = malloc(sizeof_strs(str,size) + sizeof(sep)*(size - 1));
	ft_strcat(size,str,sep,p);
		return (p);
}
/*
int main()
{
	int size = 3;

	char *str[] = {"a","b","c","d"};
	char sep[] = ", ";
	printf("%s\n",strjoin(str,sep,size));
	
}*/
