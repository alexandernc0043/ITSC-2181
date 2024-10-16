#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	// Part 1 - Provide the code to read (parse) an integer and floating point number from a string, such as:
	char string[] = "123 3.14";
	int number;
	float numberTwo;
	int result = sscanf(string, "%d %f", &number, &numberTwo);
	printf("String \"%s\"\n",string);
	printf("Parsed Number: %d\n",number);
	printf("Parsed Float: %.2f\n",numberTwo);
	printf("Number of itmes matched: %d\n",result);
	// Part 2 - Provide the code to create a string with the format "The number is xxxxx\n", where xxxxx is a number.
	// Make buffer of size of "The number is " + the size of (int) + 1 for null
	char* buffer = (char*) malloc(strlen("The number is ") + sizeof(int) + 1);
	sprintf(buffer,"The number is %d\n", number);
	printf("%s",buffer);
	return 0;
}