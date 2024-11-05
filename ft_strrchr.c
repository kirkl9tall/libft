#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	y;

	y = ft_strlen((char *)str);
	if (c == '\0')
		return ((char *)(str + y));
	while (y >= 0)
	{
		if (str[y] == c)
			return ((char *)str + y);
		y--;
	}
	return (NULL);
}
/*
int main ()
{
	const char str[] = "Hello guys how are you doing ?";
	int		search ;
	search = '\0';
	printf("%s\n",ft_strrchr(str,search));

		const char str1[] = "Hello guys how are you doing ?";
	int		search2 ;
	search2 = '\0';
	printf("%s\n",ft_strrchr(str1,search2));
}*/