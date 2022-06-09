#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int total = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			total += a;
		}
		a++;
	}
	printf("%i\n", total);
	return (0);
}
