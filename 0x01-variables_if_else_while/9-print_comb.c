#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 1 ; i < 10; i++)
	{
		putchar(i);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
