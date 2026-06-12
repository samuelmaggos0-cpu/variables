#include <unistd.h>

int main(void)
{
	int i = 1;
	char c;

	while (i <= 9)
	{
		c = '0' + i;

		write(1, &c, 1);
		write(1, "\n", 1);

		i = i + 1;
	}
}
		


