#include "main.h"
/**
 * _isalpha - checks for lowercase character
 *
 * @c: Printed  lowercase
 * Return: 1  (Success) else  0 (Failed)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
