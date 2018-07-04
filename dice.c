#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s1, s2, total=0;
  char player[100];

  printf("What is your name?\n");
  
  scanf("%s",player);

  printf("Hello, %s!\n", player);
  
  /* 乱数の元を初期化 */
  srand(time(NULL));

  printf("Rolling the dice...\n");

  s1 = rand()% 6+1;
  printf("Dice 1: %d\n", s1);
  
  s2 = rand()% 6+1;
  printf("Dice 2: %d\n", s2);

  total = s1 + s2;
  printf("Total value: %d\n", total);

  if(total >= 7) printf("%s won!\n", player);
  else if(total < 7) printf("%s lost!\n", player);
  
  return 0;
}
