#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	while (s[i] != '\0')
		i++;
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}