#include <stdio.h>
#include <ctype.h>
void capitalize(char input[]){
    for(int i = 0; input[i] != '\0'; i++){
      if(isalpha(input[i])){
        input[i] = toupper(input[i]);
      } 
    }
}

int main(void){
  char string[] = "Hello World!";
  capitalize(string);
  printf("%s\n",string);
  char the_str[] = "test";
    capitalize(the_str);
    printf("%s\n",the_str);
    char the_str2[] = "This IS a tesT!";
    capitalize(the_str2);
    printf("%s\n",the_str2);
  return 0;
}