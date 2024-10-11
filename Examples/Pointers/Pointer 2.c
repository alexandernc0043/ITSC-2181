#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int arr[] = {10,20,30,40};
	int *ptr = arr; // equivalent to arr[0]
	for(int i = 0; i < 4; i++){
		printf("%d ,",*(arr + i));
	}
	printf("\n");
	return 0;
}