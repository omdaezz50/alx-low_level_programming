#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char : %c byte(s)\n", sizeof(char));
	printf("Size of a int : %d byte(s)\n", sizeof(int));
	printf("Size of a long : %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int : %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float : %f byte(s)\n", sizeof(float));
	return (0);
}
