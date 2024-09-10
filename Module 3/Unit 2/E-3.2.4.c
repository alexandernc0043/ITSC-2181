#include <stdio.h>

int main(void) {
  int digits[12];
  for(int i = 0; i < 12; i++){
    digits[i] = 0;
  }
  digits[0] = 1;
  digits[2] = 3;
  digits[6] = 7;

  for(int i = 0; i<12; i++){
    printf("%d\n",digits[i]);
  }
  int sum = 0;
  for(int i = 0; i<12; i++){
    sum += digits[i];
  }
  printf("%d\n",sum);

  return 0;
}
