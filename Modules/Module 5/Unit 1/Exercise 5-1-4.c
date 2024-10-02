#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	Write the code to dynamically allocate memory 
	for an array named stock_prices 
	with 500 elements, each of type float.
	*/
	float* stock_prices;
	stock_prices = malloc(500 * sizeof(float));
	/*
	Assign some value to the first five elements in the array. 
	You will need to use pointer arithmetic for this.
	*/
	*(stock_prices+0) = 1.23;
	*(stock_prices+1) = 4.56;
	*(stock_prices+2) = 7.89;

	*(stock_prices+3) = 1.23;
	*(stock_prices+4) = 4.56;

	for(int i = 0; i < 5; i++){
		printf("%f\n", *(stock_prices+i));
	}

	//Free the memory used by the stock_prices array.
	free(stock_prices);
	return 0;
}