#include <unistd.h>

int ft_isalpha(char c)
{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
//		write(1,"return 1 for is alpha\n",22);
		return(1);
	}
        return (0);
}
int ft_isdigit(char x)
{

        if (x >= '0' && x <= '9')
	{
//	write(1,"return 1 for isdigit\n",22);
                return (1);
	}
        return (0);
}

int ft_isalnum(char c)
{
        if (ft_isalpha(c) || ft_isdigit(c))
	{
		write(1,"return 1 for isalnum\n",22);
		return (1);
	}
	return(0);
}
int main()
{
	char	c;

	c = 'a';
	ft_isalnum(c);
}
