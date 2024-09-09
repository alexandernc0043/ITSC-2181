#include <stdio.h>

void sort(int arr[]){
	int newArr[10];
	for(int i = 0; i < 10; i++){
		int temp = arr[i];
		int j = i -1;
		while(j >= 0 && arr[j] > temp) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

int main(void){
	int numArray[10];
	printf("Please enter 10 integers seperated by a space: ");
	for(int i = 0; i < 10; i++){
		scanf("%d", &numArray[i]);
	}
	sort(numArray);
	printf("New array:\n");
	for(int i = 0; i < 10; i++){
		printf("%d ", numArray[i]);
	}
	printf("\n");
	return 0;
}