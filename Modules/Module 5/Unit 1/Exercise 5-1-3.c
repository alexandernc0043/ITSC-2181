#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
     char *name;
     int age;
     int height; //in inches
     char eye_color;
};

int main(void)
{
	struct person me = {malloc(strlen("Alexander") + 1), 19, 67, 'b'};
	strcpy(me.name, "Alexander");
	printf("Name: %s\nAge: %d\nHeight (in): %d\nEye Color: %c\n",me.name,me.age,me.height,me.eye_color);

	return 0;
}