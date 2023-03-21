#include "main.h"
/**
 * print_alphabet_x10 - function  that prints 10X alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int letter;
	char j;

	for (letter = 1; letter <= 10; letter++)
{
	for (j = 'a'; j <= 'z'; j++)
	_putchar(j);
	_putchar('\n');
}
}
