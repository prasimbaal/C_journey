#include <stdio.h>

int lower_check(int c);

int main(void)
{
  char x;
  printf("Enter a character :");
  scanf("%c", &x);

  putchar(lower_check(x));    /*function returns ascii value for 0 or 1*/
  return 0;
}

int lower_check(int c)
{
  if (c>=97 && c<=122)    /*97 and 122 are ascii codes for lower case a and lower case z*/
    return 49;
  else
    return 48;
}
