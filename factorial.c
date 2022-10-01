#include <stdio.h>

int factorial(int); /*declaring function*/

int main()
{
	int number;  /*initialize variable to store input*/
	printf("This is a factorial calculator: ");
	scanf("%d", &number);

	printf("The factorial of %d is %d ", number, factorial(number));
	return 0;
}

int factorial(int x)
{
	int fact = 1; /* ! is the way out of a factorial*/
	while(x!=1)
		{
			fact = fact * x;
			x--;
		}
}
