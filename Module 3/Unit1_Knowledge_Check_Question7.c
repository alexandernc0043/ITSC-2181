#include <stdio.h>

int main(void){
  float salary = 65000;

  if(salary < 50000){
    printf("%f\n",salary - salary * .10);
  } else {
    printf("%f\n",salary - salary * .12);
  }

  return 0;
}
