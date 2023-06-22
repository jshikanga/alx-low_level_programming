#include "main.h"

/**
 * print_triangle - prints triangle, followed by a new line
 * @size: size of the triangle
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	int i, j;
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = i; j <= i; j++)
	}
	_putchar('\n');
}
