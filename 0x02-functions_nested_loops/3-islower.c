#include "main.h"

/**
 *function:  _islower - checks for lowercase character
 *
 * Return: 1 for lowercase character or 0 for anything else. Use the ASCII Table as your guide
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
