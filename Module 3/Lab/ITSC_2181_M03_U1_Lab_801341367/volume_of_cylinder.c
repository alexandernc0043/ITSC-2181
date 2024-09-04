#include <stdio.h>

int main(void){
  float pi = 3.14159;
  float radius;
  float height;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Enter height: ");
  scanf("%f",&height);
  float volume = pi * (radius*radius) * height;
  printf("Volume: %.2f\n", volume);
  return 0;
}
