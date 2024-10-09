#include <stdlib.h>
#include <stdio.h>



int main(void)
{
	// create a pointer called "ptr" 
	//and cast it to int pointer
	// times the sizeof int (4 bytes) by 5
	int *ptr = (int*) malloc(sizeof(int) * 5);

	if(ptr == NULL){
		printf("Error!\n");
	} 
	else {
		printf("Success!\n");
	}

	printf("Memory Address: %p\n",ptr);
	free(ptr); // free memory
	ptr = NULL;
	printf("Memory Address: %p\n",ptr);
	return 0;
}