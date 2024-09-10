#include <stdio.h>

int main(void){
	float arr[5];
	printf("Enter 5 floats: ");
	for(int i = 0; i <= 4; i++){
		scanf("%f", &arr[i]);
	}
	float avg = 0;
	for(int i = 0; i <= 4; i++){
		avg += arr[i];
	}
	avg = avg / 5;
	printf("Average: %f\n", avg);
	return 0;
}