#include <stdio.h>
#include <string.h>

void printArrayOne(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    printf("%c",str[i]);
  }
  printf("\n");
}

void printArrayTwo(char str[]){
  for(int i = 0; i < strlen(str); i++){
    printf("%c",str[i]);
  }
  printf("\n");
}


int main(void){
  char str[] = {"Hello World"};
  printArrayOne(str);
  printArrayTwo(str);

  return 0;
}
