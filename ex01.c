#include <stdio.h>

int main(void)
{
	int number;
	char character;
	unsigned int unsigned_number;
	long interger_conversion;
	float decimal_number;
	double double_number;

	number = 10;
	character = 's';
	unsigned_number = 19;
	interger_conversion = 100;
	decimal_number = 12.3;
	double_number = 22;

	printf("%d\n%c\n%u\n%ld\n%f\n%f\n", number, character, unsigned_number,
	interger_conversion, decimal_number, double_number);
	printf("%s\n\n", "Now the arithmetic lines:");
	printf("%d\n", 7 / 2);
	printf("%d\n", 7 % 2);
	printf("%f\n", 7.0 / 2);
	printf("%f\n", (float)7 / 2);
	return (0);
}
