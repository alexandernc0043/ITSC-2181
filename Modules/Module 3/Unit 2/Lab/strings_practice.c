#include "capitalize.c"
#include <stdio.h>

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