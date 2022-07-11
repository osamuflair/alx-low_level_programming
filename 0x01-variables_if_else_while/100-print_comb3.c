#include <stdio.h>
/**
 * main - a program that prints
 * all possible different combinations of two digits
 * Return: 0 if successful
 */
int main(void)
{
	int c, e;

	c = 48;
	while (c < 58)
	{
		e = 48;
		while (e < 48)
		{
			if (c != e && c < e)
			{
				putchar(c);
				putchar(e);
				if (e == 57 && c == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			e++;
		}
		c++;

	}
	putchar('\n');
	return (0);
}
