#include <stdio.h>

void modif_my_char_var(char *cc, char ccc)
{

  *cc = 'A';
  ccc = 'T';
}

int main(void)
{
  char b;
  char *p;

  p = &b;
  b = 'H';

  printf("Address of 'b' before function call %p \n",&b);
  printf("Value before function call %c \n", b);
  printf("Address of 'p' before function call %p \n", &p);
  printf("Value of 'p' before functin call %p \n", p);
  modif_my_char_var(p,b);

  printf("Address of 'b' after function call %p \n", &b);
  printf("Value of 'p' after function call %p \n", p);
  printf("address of 'p' after function call %p \n", &p);
  printf("Value of 'b' after function call %c \n", b);
  return 0;
}

  
    
