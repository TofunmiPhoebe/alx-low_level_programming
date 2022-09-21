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
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
