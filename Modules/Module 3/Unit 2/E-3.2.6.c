#include <stdio.h>
#include <string.h>

int main(void){
	char str[] = "UNC Charlotte";
	for(int i = 0; i < strlen(str); i++){
		printf("%c\n",str[i]);
	}
	printf("\n");
	return 0;
}