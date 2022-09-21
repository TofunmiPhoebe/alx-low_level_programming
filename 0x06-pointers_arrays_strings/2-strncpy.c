#include "main.h"

/**
 * strncpy - Copy a string starting from index 0 of `dest
 * @dest: copy to
 * @src: copy from
 * @n: input integer
 * Return: A pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
