#include <stdio.h>
#include <string.h>
/**
 * main - that prints the alphabet in lowercase, and then in uppercase
 * Return: 0 (successful)
 */
int main(void)
{
	char c, d;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (d = 'A' ; d <= 'Z' ; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
