#include <stdlib.h>
#include <stdio.h>



int main(void)
{
	int n = 5;
	int *arr = malloc(n * sizeof(int));

	if(arr == NULL){
		fprintf(stderr, "%s\n");
		printf("Error!\n");
		exit(1);
	} 

	for(int i = 0; i < n; i++){
		arr[i] = i+1;
	}
	for(int i = 0; i < n; i++){
		printf("Index %d : Value %d\n",i,arr[i]);
	}
	free(arr);
	arr = NULL;
	return 0;
}