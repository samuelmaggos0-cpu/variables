#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}
int main(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		ft_putchar(c);
		write(1, "\n", 1);
		c = c + 1;
	}
}
