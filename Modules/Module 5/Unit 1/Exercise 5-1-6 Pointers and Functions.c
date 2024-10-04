#include <stdio.h>

void foo(int n, int a[n], int *sum, int *largest){
	*sum = 0;
	*largest = a[0];
	for(int i = 0; i < n; i++){
		*sum += a[i];
		if(a[i] > *largest){
			*largest = a[i];
		}
	}
}


int main(void){
	int n = 7;
	int a[] = {0,1,2,3,4,5,6};
	int sum;
	int largest;
	foo(n,a,&sum,&largest);
	printf("%d : %d\n",sum,largest);

	return 0;
}