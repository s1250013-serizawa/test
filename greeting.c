#include <stdio.h>

int main(){

  char player[100];

  printf("What is your name?\n");
  
  scanf("%s",player);

  printf("Hello, %s!\n", player);
  
  return 0;
}
