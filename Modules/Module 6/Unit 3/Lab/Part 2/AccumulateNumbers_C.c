#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i = 0;
	int x = 100;
	int arr[100];
	while(i != x){
		arr[i] = rand() % (100 + 1);
		printf("%d\n",arr[i]);
		i++;
	}
	return 0;
}