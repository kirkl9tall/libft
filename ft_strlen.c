#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
