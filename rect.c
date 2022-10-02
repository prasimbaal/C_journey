#include <stdio.h>


int main()
{
	int i, j, n;
	printf("Enter a number");
	scanf("%d", &n);
	i = 1;
	while(i<=n)
		{
			j = 1;
			while(j<=n)
				{
					printf("%d ", j);
					j++;
				}
			printf("\n");
			i++;
		}
	return 0;
}
