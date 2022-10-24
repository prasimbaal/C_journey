#include <stdio.h>

int main()
{
  int n;
  int *p;
  n = 98;
  p = &n;

  // *p++;

  printf("'n': %d \n", n);
  printf("'address of 'n' %p \n", &n);
  printf("value of 'p' %p\n", p);
  *p = 22;
  printf("'n' %d \n", n);
  printf("address of 'p' %p \n", &p);
  return 0;
}
