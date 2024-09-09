#include <stdio.h>

int main(void){
  int input;
  printf("Please enter the numeric grade: ");
  scanf("%d", &input);
  printf("The letter grade is: ");
  if(input >= 90){
    printf("A\n");
  }
  else if (input < 90 && input >= 80){
    printf("B\n");
  }
  else if(input < 80 && input >= 70){
    printf("C\n");
  }
  else if(input < 70 && input >= 60){
    printf("D\n");
  }
  else {
    printf("F\n");
  }
  return 0;
}
