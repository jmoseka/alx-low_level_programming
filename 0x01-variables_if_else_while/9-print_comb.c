#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that print letters and no.s using putchar
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');

		if (n == 9)
		{
			putchar(' ');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
