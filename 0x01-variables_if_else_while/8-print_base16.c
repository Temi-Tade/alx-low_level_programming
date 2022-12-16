#include <stdio.h>
/**
* main - Print hexdecimal
* Return: 0  (Success)
*/

int main(void)

{
	char c;
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
