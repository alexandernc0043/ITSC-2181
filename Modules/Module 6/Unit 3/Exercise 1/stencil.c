#include <stdlib.h>

int main(void) {
	int M = 100;
	int A[M], B[M];
	srand(1<<12);
	for(int i=0; i<M; i++){
		B[i] = rand() % 20;
	}
	A[0] = B[0];
	A[M-1] = B[M-1];
	for(int i=1; i<M-1; i++){
		A[i] = (B[i-1]+B[i]+B[i+1])/3;
	}
	return 0;
}