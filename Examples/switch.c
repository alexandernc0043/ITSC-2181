#include <stdio.h>

int main(void){
  char grade = 'A';
  switch(grade){
    case 'A': 
      printf("You passed!\n");
      break;
    
    case 'B':
      printf("You passed!\n");
      break;
    
    default:
      printf("You failed!\n");
      break;
    
  }
return 0;
}
