#include <stdio.h>
#include <stdlib.h>
char *ft_strchr(const char *str, int search_str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] == search_str)
			return(char*)(str + x);
		x++;
	}
	if (str[x] == '\0')
		return(char*)(str + x);
	return (NULL);
}

int main ()
{
	const char str[] = "Hello guys how are you doing ?";
	int	 search ;
	search = 'h';
	printf("%s\n",ft_strchr(str,search));
}

