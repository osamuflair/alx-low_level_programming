#include <stdio.h>
#include <string.h>
/**
 * main - all the letters except q and e
 * Return: 0 (successful)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
