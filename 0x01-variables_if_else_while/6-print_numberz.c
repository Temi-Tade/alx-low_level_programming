#include <stdio.h>

/**
* main - Print numbers between 0 and 10
* Return: 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
