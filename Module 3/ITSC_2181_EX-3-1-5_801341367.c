#include <stdio.h>

int main(void){
  int num = 0;
  int count = 1;
  printf("Part 1: \n");
  for(int i = 0; count <= 20; i++){
    if(num % 2 == 0){
      printf("Count #%d : %d\n", count, num);
      count++;
    }
    num++;
  }
  printf("Part 2: \n");
  num = 50;
  count = 0;
  for(int i = 0; num >= 20; i++){
    if(num % 2 != 0){
      printf("Count #%d : %d\n",count, num);
      count++;
    }
    num--;
  }


  return 0;
}
