
#include <stdio.h>

int main()
{
  int a[5];
 

  a[0] = 77;

  a[1] = 22;
  a[2] = 89;
  a[3] = 69;
  a[4] = 100;

  printf("Value of the array is %p \n", a);  /*value of the array is the address of the first element of the array*/
  printf("Address of the first element of the array %p \n", &a[0]);
  printf("address of the last element of the array %p \n", &a[4]);
  printf("%d \n", a[1]);
  printf("%d \n", a[0]);
  return 0;
}
