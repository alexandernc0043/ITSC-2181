#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n >> 1);
    }
    printf("%d", n & 1);
}
int main(void){
  int inputOne;
  int inputTwo;
  // Get Input
  printf("Enter a decmial value: ");
  scanf("%d", &inputOne);
  printf("Enter a binary value: ");
  scanf("%d", &inputTwo);


  // Print Binary of Inputs 1 & 2
  printf("Binary value of %d : ", inputOne);
  printBinary(inputOne);
  printf("\n");
  printf("Binary value of %d : ", inputTwo);
  printBinary(inputTwo);
  printf("\n");

  // Print Bitwise AND / OR / XOR of inputs 1 & 2 
  printf("Bitwise AND between %d & %d : ", inputOne, inputTwo);
  printBinary(inputOne & inputTwo);
  printf("\n");
  printf("Bitwise OR between %d & %d : ", inputOne, inputTwo);
  printBinary(inputOne | inputTwo);
  printf("\n");
  printf("Bitwise AND between %d & %d : ", inputOne, inputTwo);
  printBinary(inputOne ^ inputTwo);
  printf("\n");
  return 0;
  /* Example 
  Enter a decmial value: 26
  Enter a binary value: 54
  Binary value of 26 : 11010
  Binary value of 54 : 110110
  Bitwise AND between 26 & 54 : 10010
  Bitwise OR between 26 & 54 : 111110
  Bitwise AND between 26 & 54 : 101100
  */
}
