#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 (successfull)
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
