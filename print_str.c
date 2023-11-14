#include "main.h"

/**
* _strlen - returns the lenght of a string
* @str: pointer to a string
* Return: 1 Success
*/

int _strlen(char *str)
{
	int i;
	for (i = 0; str[i] != 0; i++);
	return (i);
}

/**
 * _strlenc - strlen function but applied for constant and pointer
 * @str: char pointer
 * Return: 1
 */


int _strlenc(const char *str)
{
	int i;
        for (i = 0; str[i] != 0; i++);
        return (i);
}
