#include <stdlib.h>
#include <stdio.h>

void changeValue(int *ptr){
	*ptr = 100;
}


int main(int argc, char const *argv[])
{
	int num = 10;
	int *ptr = &num;
	printf("Address : %p\n",ptr);
	printf("Value : %d\n",*ptr);
	changeValue(&num);
	printf("Address : %p\n",ptr);
	printf("Value : %d\n",*ptr);
	return 0;
}