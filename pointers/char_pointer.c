#include <stdio.h>

int main(void)
{
  char ch;
  char *x;
  x = &ch;
  int n;
  int *p;
  p = &n;
  printf("Enter a number: \n ");
  printf("Enter a character: ");
  scanf("%d %c",&n, &ch);
  
  printf("Address of %d in memory is %p \n",n ,p);
  printf("address of %c in memory is %p \n", ch,x);

  ch++; /*to see by how many bytes character address displaces after an increment of 1*/
  printf("Address of %c after a increment of 1 is %p \n",ch ,&ch);
  n++;
  printf("Address of %d after an increment of 1 is %p \n", n, &n);
  return 0;
}
