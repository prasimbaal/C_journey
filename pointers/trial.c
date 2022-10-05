#include <stdio.h>

int main()
{
	int number = 10;
	int *ip;

	ip = &number; /*ip points to address of number*/
	
	printf("Address of variable %p \n",&number);
	printf("value of number is %d \n", number);
	printf("value of ip %p \n", ip);
	printf("Address of ip %p \n", &ip);
	*ip = 20;  /*derefrenced number variable*/
	printf("Value of number has changed to %d \n", number);
	printf("Address of the number variable after derefrencing %p \n", &number);
	printf("Value of pointer variable after derefrencing is %p \n", ip);
	return 0;
}
