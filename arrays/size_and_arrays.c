#include <stdio.h>

int main(void)

{
  int a[90];

  printf("'a': %p \n", a);
  printf("'&a': %p \n", &a);
  printf(" 'sizeof(a)' : %lu bytes \n", sizeof(a));   /*(90*4) == 360 */
  printf("'sizeof(&a)' : %lu bytes \n", sizeof(&a));
  return 0;
}
