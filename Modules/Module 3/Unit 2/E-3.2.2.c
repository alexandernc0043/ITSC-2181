#include <stdio.h>

float cube_volume(float param){
  return param * param * param;
}


int main(void){
  printf("%f\n",cube_volume(3));

  printf("%f\n",cube_volume(3.45));
  return 0;
}
