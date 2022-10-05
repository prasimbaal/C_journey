#include <stdio.h>

int main()
{
  int x;
  char y;
  printf("Enter an integer \n");
  printf("Enter a character \n");
  scanf("%d %c", &x, &y);

  printf("the address of the integer is %p \n", &x);
  printf("the address of the character is %p \n", &y);

  return 0;
}
