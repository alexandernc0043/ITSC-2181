#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int nums[100];
	int sum = 0;
	for(int i = 0; i < 100; i++){
		nums[i] = rand() % (100 + 1);
	}
	for(int i = 0; i < 100; i++){
		sum += nums[i];
	}
	printf("Total : %d\n", sum);
	return 0;
}
// clear; gcc Program\ 1.c -o p1; ./p1; rm p1