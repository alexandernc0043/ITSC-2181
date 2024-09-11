#include <stdio.h>
#include <string.h>

int main(void){
  char str[] = "Hello World!";

  printf("Length :%lu\n", strlen(str));
  for(int i = 0; i < strlen(str); i++){
    printf("%c",str[i]);
  }
  
  printf("\n");
  return 0;
}
