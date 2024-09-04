#include <stdio.h>

int main(void){
  // variables
  float pi = 3.14159;
  float radius;
  float height;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Enter height: ");
  scanf("%f",&height);
  // calculates volume based of formula (pi)(radius)^2(height)
  float volume = pi * (radius*radius) * height;
  printf("Volume: %.2f\n", volume);
  return 0;
}
