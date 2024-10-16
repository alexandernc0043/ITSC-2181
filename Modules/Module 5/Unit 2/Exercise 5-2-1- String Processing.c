#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char firstStr[] = "UNC";
char secondStr[] = "Charlotte";

// 2.2 - Write the code to concatenate two strings and print the result.
char* concat(const char* firstString, const char* secondString){
	// length of first string + second string + null operator
	int total = strlen(firstString) + strlen(secondString) + 1;
	char* string = (char*) malloc(total);
	strcpy(string,firstString);
	strcat(string,secondString);
	strcat(string, "\0");
	return string;
}
// 2.3 - Write the code to compare two strings and copy the lesser to the greater.
void compare(char* first, char* second){
	int valueOne = 0;
	int valueTwo = 0;
	for(int i = 0; i < strlen(first); i++){
		valueOne += (int) first[i];
	}
	for(int i = 0; i < strlen(second); i++){
		valueTwo += (int) second[i];
	}
	// if one is lesser than two copy one onto to two.
	if(valueOne < valueTwo){
		strcpy(second, first);
	}
	else if (valueTwo < valueOne){
		strcpy(first, second);
	}
}
// 2.4 - Write the code to find how many times the character '?' occurs in a string.
int findOccurances(const char letter, const char* string){
	int total = 0;
	for(int i = 0; i < strlen(string); i++){
		if(string[i] == letter) total++;
	}
	return total;
}
int main(void)
{
	// 2.1 - Print the length of a string.
	printf("2.1 - The length of the String \"%s\" is %lu.\n",firstStr,strlen(firstStr));
	printf("2.1 - The length of the String \"%s\" is %lu.\n",secondStr,strlen(secondStr));
	printf("---\n");
	// 2.2 - Write the code to concatenate two strings and print the result.
	printf("2.2 - The Two Strings \"%s\" and \"%s\" concated is \"%s\".\n",firstStr,secondStr,concat(firstStr,secondStr));
	printf("2.2 - The Two Strings \"%s\" and \"%s\" concated is \"%s\".\n",secondStr,firstStr,concat(secondStr,firstStr));
	printf("---\n");
	// 2.3 - Write the code to compare two strings and copy the lesser to the greater.
	printf("2.3 - Comparing the two strings \"%s\" and \"%s\"", firstStr, secondStr);
	compare(firstStr,secondStr);
	printf(", now the two strings are: \"%s\" and \"%s\".\n", firstStr, secondStr);
	char newStr[] = "Alexander";
	char newStrTwo[] = "Prechtel";
	printf("2.3 - Comparing the two strings \"%s\" and \"%s\"", newStr, newStrTwo);
	compare(newStr, newStrTwo);
	printf(", now the two strings are: \"%s\" and \"%s\".\n", newStr, newStrTwo);
	// 2.4 - Write the code to find how many times the character '?' occurs in a string.
	printf("---\n");
	printf("2.4 - The String \"%s\" contains %d \"?\"s.\n",firstStr,findOccurances('?',firstStr));
	printf("2.4 - The String \"%s\" contains %d \"?\"s.\n","Hello World?", findOccurances('?',"Hello World?"));
	return 0;
}