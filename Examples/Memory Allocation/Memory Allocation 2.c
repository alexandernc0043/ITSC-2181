#include <stdlib.h>
#include <stdio.h>



int main(void)
{
	int *ptr = (int*) malloc(sizeof(int));

	if(ptr == NULL){
		fprintf(stderr, "%s\n");
		printf("Error!\n");
		exit(1);
	} 
	*ptr = 10;
	printf("%d\n",*ptr);
	free(ptr);
	ptr = NULL;

	return 0;
}