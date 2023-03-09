#include "main.h"
/**
 * _strlen - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{

		n++;
		n = n + _strlen_recursion(s + 1);
	}
	return (n);
}
