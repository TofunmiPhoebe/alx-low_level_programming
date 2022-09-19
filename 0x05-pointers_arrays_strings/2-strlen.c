#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: An input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
