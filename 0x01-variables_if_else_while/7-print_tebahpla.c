#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always0 (Success)
 */
int main(void)
{

	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}