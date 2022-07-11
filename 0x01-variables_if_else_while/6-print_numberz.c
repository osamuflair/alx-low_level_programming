#include <stdio.h>
/**
 * main -  a program that prints all single digit numbers of base 10,
 * starting from 0, followed by a new line
 * Return: 0 (successful)
 */
int main(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
