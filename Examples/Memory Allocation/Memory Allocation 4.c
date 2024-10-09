#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	char *str = malloc(20 * sizeof(char));
	if(str == NULL){
		fprintf(stderr, "%s\n");
		exit(1);
	}
	strcpy(str, "Hello World");
	printf("%s\n",str);
	free(str);
	str = NULL;
	return 0;
}