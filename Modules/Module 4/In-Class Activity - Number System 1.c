#include <stdio.h>
#include <stdlib.h>
	
int randomNumber = 1676;

void toHexadecimal(){
	char hexadecimal[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int quotient = 0;
	char hex[sizeof(randomNumber)];
	int i = 1;

	quotient = (randomNumber / 16);
	hex[0] = hexadecimal[randomNumber % 16];
	while(quotient != 0){
		hex[i] = hexadecimal[quotient % 16];
		quotient = quotient / 16;
		i++;
	}
	for(int i = sizeof(randomNumber); i > 0; i--){
		if(hex[i] != '\0'){
			printf("%c",hex[i]);	
		}
		
	}
	printf("%c\n",hexadecimal[randomNumber % 16]);
}
void toBinary(int num){
	if (num > 1) {
        toBinary(num >> 1);
    }
    printf("%d", num & 1);
}

int main(void){
	printf("%d Converted to Hexadecimal and Binary is: \n",randomNumber);
	printf("Hexadecimal : "); toHexadecimal();
	printf("Binary : "); toBinary(randomNumber);
	printf("\n");
	//toBinary();
	return 0;
}