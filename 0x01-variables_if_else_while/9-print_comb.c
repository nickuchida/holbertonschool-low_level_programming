#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c < '9')
		{
			putchar (c);
			putchar (',');
			putchar (' ');
		}
		else
			putchar(c);
	}
	return (0);
}
