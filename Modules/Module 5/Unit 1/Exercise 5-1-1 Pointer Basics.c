#include <stdio.h>

int main(void){
	/*
	Part 1
		Declare a variable to store integer data.
		Declare a pointer to integer data.
		Using the pointer, set the value of the variable to 100.
	*/
	int integerData;
	int* pointer;
	pointer = &integerData;
	*pointer = 100;
	printf("%d\n",integerData);
	/*
	Part 2
		Declare a variable to store floating point data.
		Declare a pointer to floating point data.
		Using the pointer, set the value of the variable to 3.1416 
	*/
	float floatData;
	float* floatpointer;
	floatpointer = &floatData;
	*floatpointer = 3.1416;
	printf("%f\n",floatData);
	return 0;
}