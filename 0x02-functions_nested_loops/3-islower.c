#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: 1 for lower characters and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
