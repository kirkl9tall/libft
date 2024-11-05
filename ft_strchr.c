#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int		x;
	size_t	y;

	y = strlen((char *)str);
	x = 0;
	if (c == '\0')
		return ((char *)(str + y));
	while (str[x])
	{
		if (str[x] == c)
			return ((char *)str + x);
		x++;
	}
	return (NULL);
}

int	main(void)
{
	const char	str[] = "Hello guys how are you doing ?";
	int			search;
	const char	str1[] = "Hello guys how are you doing ?";
	int			search2;

	search = 'h';
	printf("%s\n", strchr(str, search));
	search2 = 'h';
	printf("%s\n", ft_strchr(str1, search2));
}
