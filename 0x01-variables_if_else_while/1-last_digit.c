#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int Last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_Digit = n % 10;
	if (Last_Digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
				n, Last_Digit);
	else if (Last_Digit < 6 && Last_Digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, Last_Digit);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}
