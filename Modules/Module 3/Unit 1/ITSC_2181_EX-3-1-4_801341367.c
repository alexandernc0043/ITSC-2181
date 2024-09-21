#include <stdio.h>

int main(void){
  printf("For Loop: \n");
  for(int x = 0; x < 10; x++){
    printf("x = %d\n", x);
  }
  printf("While loop: \n");
  int x = 0;
  while(x < 10){
    printf("x = %d\n",x);
    x++;
  }
  return 0;
}
