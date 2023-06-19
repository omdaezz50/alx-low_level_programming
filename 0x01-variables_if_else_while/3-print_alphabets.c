#include <stdio.h>
/**
 * main - main block
 * Description: Use putchar to print alphabet in small case the capital case.
 * Return: 0
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}

	chr = 'A';

	while (chr <= 'Z')
	{
		putchar(chr);
		chr++;
	}

	putchar('\n');

	return (0);
}

