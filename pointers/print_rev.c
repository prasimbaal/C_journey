#include <stdio.h>
#include <string.h>
int main()
{
  char mystr[60];
  int len,i;
  printf("Enter string you want to be reversed: ");
  scanf("%c",mystr);
  len = strlen(mystr);
  for(i=len-1;i>=0;i--){
    putchar(mystr[i]);
  }
  return 0;
}
