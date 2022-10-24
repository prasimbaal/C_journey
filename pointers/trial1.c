#include <stdio.h>

int main(void)
{
  int a[5];
  int *p;
  int *p2;

  *a = 98;
  *(a + 1) = 198;
  *(a + 2) = 298;
  a[3] = 398;
  *(a + 4) = 498;
  int i;
  for(i=0;i<5;i++)
    printf("Value of 'a['%d']' is %d and its address id %p \n", i,a[i], &a[i]);

  printf("Address of p: %p\n", &p);
  p = a + 1;
  printf("value of 'a': %d, value of 'p': %p, address of 'p': %p \n", a[1], p, &p);
  *p = 98;
  printf("Value of a[0]: %d, address of a[0]: %p, address of '*p' %p\n", *a, &a[0], &p);
  p2 = a + 3;
  printf("Value of a[3]: %d, address of a[3]: %p, address of p2: %p \n",a[3], &a[3], &p2);
  *p2 = *p + 1337;
  printf("Value of a[0]: %d, value of p2: %p, value of *p: %p\n",a[0], p2, *p);
  return (0);
}
