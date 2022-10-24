#include <stdio.h>

int main(){
  int rows,columns;
  printf("Enter the row and column for your matrix respectively ");
  scanf("%d %d",&rows, &columns);
  int index = rows*columns;
  int element[index];
  printf("row:%d, column:%d \n",rows,columns);
  int i=1;
  int j,k;

  for(k=0;k<index;k++){
    printf("Enter elements: ");
    scanf("%d",&element[k]);
  }
  for(j=0;j<index;j++){
    printf(" %d  ",element[j]);
    if(i==rows){
      printf("\n");
      i=1;
    }
    i++;
  }
  return 0;
}
