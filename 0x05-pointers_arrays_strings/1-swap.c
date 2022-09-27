#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: An integer to swap
 * @b: An integer to swap
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
