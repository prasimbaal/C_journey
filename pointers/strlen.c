#include <stdio.h>

int _strlen(char *str)
{
  int count = 0;
  while(*str != '\0')
    {
      
      count++;
      str++;
    }
  return count;
}

int main()
{
  char name[20];
  printf("Enter your name: \n");
  gets(name);
  int len = _strlen(name);
  printf("Your name is %d characters long \n", len);
  printf("THe size of 'name' in memory is %lu \n", sizeof(name));
  
  return 0;
}


	
