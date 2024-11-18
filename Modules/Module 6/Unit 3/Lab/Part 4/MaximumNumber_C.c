#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int maximum = 0;
	int i = 0;
	int x = 100; // max
	int arr[100];
	while(i != x){
		arr[i] = rand() % (100 + 1); // upper bound 100 , lower bound 100
		i++;
	}
	i = 0;
	while(i != x){
		if(arr[i] > maximum){
			maximum = arr[i];
		}
		i++;
	}
	printf("Maximum: %d\n", maximum);
	return 0;
}