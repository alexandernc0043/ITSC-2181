#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* file;
	file = fopen("output.txt","w");
	if(file == NULL){
		printf("Error\n");
		exit(1);
	}
	fprintf(file, "Charlotte is in North Carolina\n");
	fclose(file);
	return 0;
}