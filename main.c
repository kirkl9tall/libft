#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int			x;
	char		src[] = "Hello";
	char		dest[50];
	size_t		size;
	const char	srcs[] = "hello hello  my name is zrire9";
	int			updown;

	size = 6;
	updown = 70;
	x = 102;
	printf("1-is %d\n", ft_isascii(x));
	printf("2-is %d\n", ft_isalpha(x));
	printf("3-is %d\n", ft_isdigit(49));
	printf("4-is %d\n", ft_isalnum(x));
	printf("5-is %d\n", ft_isprint(x));
	printf("6-strlen %zu\n", ft_strlen(src));
	printf("7-memset %p\n", ft_memset(src, x, 3));
	ft_bzero(src, 0);
	printf("8-mmcpy %s\n", (char *)ft_memcpy(dest, src, 5));
	printf("9-strlcpy %d\n", (int)ft_strlcpy(dest, srcs, 5));
	printf("10-mmove %s\n", (char *)ft_memmove(src, src, 5));
	printf("11-strlcat : %d\n", (int)ft_strlcat(dest, src, size));
	printf("12-tup %c\n", ft_toupper(updown));
	printf("13-tlow %c\n ", ft_tolower(updown));
}
