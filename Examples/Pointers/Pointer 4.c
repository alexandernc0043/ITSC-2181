#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int *ptr = (int*)malloc(sizeof(int) * 5);
	if(ptr == NULL){
		printf("malloc, Failed\n");
		exit(1);
	}
	printf("malloc, Success\n");

	*ptr = 10;
	printf("%d\n", *ptr);


	free(ptr);
	ptr = NULL;
	return 0;
}