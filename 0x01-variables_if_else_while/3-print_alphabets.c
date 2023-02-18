#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ca;

	for (ca = 'a'; ca <= 'z'; ca++)
		putchar(ca);
	for (ca = 'A'; ca <= 'Z'; ca++)
		putchar(ca);
	putchar('\n');
	return (0);
}
