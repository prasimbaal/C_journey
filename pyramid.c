#include <stdio.h>

int main()
{
	int i, j, spc, rows,k;     /* initializing variables*/
	printf("Enter number of rows ");
	scanf("%d", &rows);
	spc = rows - 1; /*spc short for space*/ 

	for (i=1; i<=rows;i++)
		{
			for (j=0; j<=spc; j++)  /*rate of spaces decreases with every row*/
				{
					printf(" ");
				}
			for(k=1;k<=i;k++)  /*rate of asteriks increases as row number increases*/
				{
					printf("* ");
				}
			printf("\n");
			spc--;
		}
	return 0;
}

						
