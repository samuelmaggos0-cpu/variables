#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(const char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i = i + 1;
	}
}

int main(void)
{
	ft_putstr("Hello");
	return (0);
}


