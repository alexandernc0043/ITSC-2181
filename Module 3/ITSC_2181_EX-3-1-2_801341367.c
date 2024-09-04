#include <stdio.h>

int main(void){
  int a = 32;
  int b = 5;
  int c = 8;
  int d = 4;
  int e = 12;

  if(b>c){
    printf("Part 1 : true\n");
  } else {
    printf("Part 1 : false\n");
  }
  if((e/d)+6){
    printf("Part 2 : true\n");
  } else {
    printf("Part 2 : false\n");
  }
  if(a-= ((b>c) || (e/d)) +6){
    printf("Part 3 : true\n");
  } else {
    printf("Part 3 : false\n");
  }
  printf("A = %d\n", a);
  return 0;
}
