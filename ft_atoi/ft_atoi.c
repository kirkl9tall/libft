#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int number = 0 ; 
	int signe = 1;
	int x = 0;

	while (str[x] == '\t' || str[x] == ' ')
		x++;
	while ( str[x] && (str[x] == '-' || str[x] == '+'))
	{
		if (str[x] == '-')
			signe = -signe;
		x++;
	}
	while ( str[x] && str[x]>='0' && str[x]<='9')
	{
		number = number * 10 ;
		number  = number + (str[x] - '0');
		x++;
	}
	while ((str[x] >= 65 && str[x] >= 90)
			|| (str[x] >= 97 && str[x] <= 122))
			break;
	return (number * signe);
}

int main ()
{
		char str[] = "  --1234ab567";

		printf("%d\n",ft_atoi(str));

		return 0;
}
