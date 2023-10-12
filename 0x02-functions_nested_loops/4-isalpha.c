#include "main.h"
#include <ctype.h>

/**
 * _isapha - checks for lphabetic character
 * us ASCII table as your guide
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{return (1);
}
return  (0);
}
