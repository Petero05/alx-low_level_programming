#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: Printed  lowercase
 * Return: 1  (Success) else  0 (Failed)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
