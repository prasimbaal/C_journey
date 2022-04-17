#include <stdio.h>

int calc(int a, char c, int b)
{
    int result;
    switch (c){
    case '+':
	result = a + b;
    case '-':
	result = a-b;
    case '*':
	result = a*b;
    case '/':
	result = a/b;
    default:
	printf("Operator not valid\n");
    }
    printf("Your answer is %i", result);
		    
}

int main()
{
    printf("This is a calculator \n");
    
    int first_no;
    int second_no;
    char operator;

    puts("Enter a number");
    scanf("%i", &first_no);

    puts("enter an operator");
    scanf("%c", &operator);

    puts("Enter second number");
    scanf("%i", &second_no);

    calc(first_no, operator, second_no);
    return 0;
}
