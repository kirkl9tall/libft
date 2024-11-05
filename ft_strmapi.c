#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*p;

	if (!s || !f)
		return (NULL);
	p = malloc(strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	x = 0;
	while (s[x])
	{
		p[x] = (f)(x, s[x]);
		x++;
	}
	p[x] = '\0';
	return (p);
}
/*
int	main(void)
{
	char *result;
	char *str = "Hello World!";

	result = ft_strmapi(str, example_function);
	if (result)
	{
		printf("Original: %s\n", str);
		printf("Mapped:   %s\n", result);
		free(result);
	}
	return (0);
}*/