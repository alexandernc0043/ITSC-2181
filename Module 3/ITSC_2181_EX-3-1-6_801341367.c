#include <stdio.h>

int main(void){
  int input = 0;
  int sum = 0;
  while(1==1){
    printf("Current Sum: %d\n", sum);
    printf("Please enter the next number: ");
    scanf("%d",&input);
    if(input == -1){
      break;
    }
    sum += input;
  }
  printf("Done!\n");
  return 0;
}
