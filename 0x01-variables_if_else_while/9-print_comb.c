#include <stdio.h>

/**
* main - Print all possible combination of numbers
* Return: 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
