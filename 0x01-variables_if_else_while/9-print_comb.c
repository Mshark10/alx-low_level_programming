#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints 0-9 each number seperated by ,
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
