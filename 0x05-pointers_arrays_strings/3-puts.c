#include "main.h"

/**
 * _puts - prints a string to the stdout
 *
 * @str: string to check
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
