#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @j: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number j
 */
int print_last_digit(int j)
{
	int n;

	if (j < 0)
		n = -1 * (j % 10);
	else
		n = j % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
