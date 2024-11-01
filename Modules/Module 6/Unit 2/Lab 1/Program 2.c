#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int nums[100];
	float sum = 0;

	for(int i = 0; i < 100; i++){
		nums[i] = rand() % (100 + 1);
	}
	for(int i = 0; i < 100; i++){
		sum += nums[i];
	}
	printf("Average : %.2f\n", (sum / 100));
	return 0;
}
// clear; gcc Program\ 2.c -o p2; ./p2; rm p2




















