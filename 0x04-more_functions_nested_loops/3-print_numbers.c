#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
