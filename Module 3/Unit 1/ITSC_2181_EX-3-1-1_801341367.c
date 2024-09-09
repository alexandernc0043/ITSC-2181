#include <stdio.h>

int main(void){
 printf("Enter two characters, a space, a float, a space, and a whole number:\n");
  char char1;
  char char2;
  float myFloat;
  int num;
  scanf("%c%c %f %d", &char1, &char2, &myFloat, &num);
  printf("%c%c\n", char1, char2);
  printf("%f\n", myFloat);
  printf("Two Decimal places: %.2f\n", myFloat);
  printf("%d\n", num);
  return 0;
}
