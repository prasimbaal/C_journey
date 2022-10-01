#include <stdio.h>

int max(int num1, int num2)
{
	int result; /*local variable*/
	if (num1>num2)
		result = num1;
	else
		result = num2;
}
int main()
{
	int x,y;
	printf("enter a number: ");
	scanf("%d",&x);
	printf("Enter another number: ");
	scanf("%d", &y);
	printf("The maximum from the two numbers is %d \n", max(x,y));
}
