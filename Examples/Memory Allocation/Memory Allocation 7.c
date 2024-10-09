#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;
	double value;
} Item;



int main(void){
	int n = 5;
	// void *calloc(size_t nitems, size_t size)
	Item *arr = calloc(n,sizeof(Item));
	if(arr == NULL){
		fprintf(stderr, "%s\n");
		exit(1);
	}
	for(int i = 0; i < n; i++){
		arr[i].id = i;
        arr[i].value = i * 2.5;
	}
	for(int i = 0; i < n; i++){
		printf("ID: %d, Value: %.1f\n",arr[i].id,arr[i].value);
	}
	free(arr);
	return 0;
}