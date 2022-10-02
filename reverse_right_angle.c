#include <stdio.h>
int main()
{
	int i,j,number;
	printf("Enter Number: ");
	scanf("%d", &number);

	i = number;
	while(i>=1)
		{
			j = i;
			while(j>=1)
				{
					printf("%d",j);
					j--;
				}
			printf("\n");
			i--;
		}
	return 0;
}
