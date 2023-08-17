#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;

	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		total += va_arg(args, int);

	va_end(args);
	
	return (total);
}
