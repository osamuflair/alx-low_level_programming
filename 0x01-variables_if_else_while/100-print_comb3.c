#include <stdio.h>
/**
 * main - a program that prints
 * all possible different combinations of two digits
 * Return: 0 if successful
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && ce== 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;

	}
	putchar('\n');
	return (0);
}
