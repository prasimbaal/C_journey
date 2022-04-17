#include <stdio.h>

int main()
{
    int color_code = 0;
    printf("enter a number: ");
    scanf("%i",&color_code);

    if ((color_code >= 0) && (color_code <10))
	printf("color blue \n");
    else if ((color_code >=10) && (color_code<20))
	printf("RED \n");
    else if ((color_code >=20) && (color_code <=30))
	printf("GREEN DOT \n");
    else printf("that is not a color option \n");
    return 0;
}
