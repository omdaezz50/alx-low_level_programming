#include <stdio.h>
/**
 * main - main block
 * Description: This is the us of putchar to print from a..z .
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
	putchar('\n');

	return (0);
}
