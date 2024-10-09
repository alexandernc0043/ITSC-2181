#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n = 10;
	// void *calloc(size_t nitems, size_t size)
	int *arr = calloc(n,sizeof(int));
	if(arr == NULL){
		fprintf(stderr, "%s\n");
		exit(1);
	}
	for(int i = 0; i < n; i++){
		printf("%d\n",arr[i]);
	}
	free(arr);
	return 0;
}