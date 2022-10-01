#include <stdio.h>

int main()
{
	int i, number, j;
	printf("Enter a number : ");
	scanf("%d", &number);
	i = 1;
	while(i<=number)
		{
			printf("\n");
			j = 1;
			while(j<=i)
				{
					printf("%d",j);
					j++;
				}
			if (i==number)
				{
					printf("\n");
				}
			i++;
		}
	return 0;
}

				  
