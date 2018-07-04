#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s1, s2, total=0;

  /* 乱数の元を初期化 */
  srand(time(NULL));

  printf("Rolling the dice...\n");

  s1 = rand()% 6+1;
  printf("Dice 1: %d\n", s1);
  
  s2 = rand()% 6+1;
  printf("Dice 2: %d\n", s2);

  total = s1 + s2;
  printf("Total value: %d\n", total);

  if(total >= 7) printf("You won!\n");
  else if(total < 7) printf("You lost!\n");
  
  return 0;
}
