#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by
 * but fot multiples of thress prints Fizz instead of the
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} if (((i % 3) || (i % 5)) == 0)
		{
			print("%d", i);
		} else
		{
			printf("%d", i);
		}
		printf("\n");

		return (0);
}
