#include <stdio.h>

/**
 * main - print alphabets with putchar
 * Return: 0(Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
