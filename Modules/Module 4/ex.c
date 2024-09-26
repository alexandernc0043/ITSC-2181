#include <stdio.h>
#include <stdint.h>

int main(void){
  float num = 1676;
  uint64_t hex = (uint64_t)num;
  printf("%llx\n",hex);
}
