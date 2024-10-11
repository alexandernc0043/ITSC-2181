#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE* ptr;
	char str[80];
	ptr = fopen("example.txt","r");
	if(ptr == NULL){
		printf("Error opening file.\n");
		exit(1);
	}
	if(fgets(str, 80, ptr) != NULL)
  {
    puts(str);
  }
  fclose(ptr);

	return 0;
}