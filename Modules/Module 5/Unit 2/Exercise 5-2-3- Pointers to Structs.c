#include <stdio.h>
#include <string.h>
/*
Write a function that given two pointers to box structs, does the following:

1. Updates the box with the greater volume to position (0, 0, 0) and color of "green".
	Use the same box struct from the previous exercises.

2. If both boxes have equal volume, update the second box.

3. The function has a return type of void, i.e., it does not return anything.
*/

struct Box {
	int itemnum;
	char color[20];

	int height;
	int width;
	int depth;
	
	float x;
	float y;
	float z;
};
int volume(const struct Box* box){
	return box->height * box->width * box->depth;
}
void printBox(const struct Box* box){
	printf("Itemnum #%d\tColor: %s\tHeight: %d\tWidth: %d\tDepth: %d\tPosition (%.2f, %.2f, %.2f)\tVolume : %d\n",
		box->itemnum,
		box->color,
		box->height,
		box->width,
		box->depth,
		box->x,
		box->y,
		box->z,
		volume(box)
		);
}
void updateBoxes(struct Box* one, struct Box* two){
	if (volume(one) > volume(two)) {
        // update the first box
        one->x = 0;
        one->y = 0;
        one->z = 0;
        strcpy(one->color, "green");
    } else {
        // update second
        two->x = 0;
        two->y = 0;
        two->z = 0;
        strcpy(two->color, "green");
    }
    printf("\nAfter running function: \n");
	printBox(one);
	printBox(two);
}

int main(void)
{
	printf("Second Box with bigger volume:\n");
	struct Box boxOne = {1,"red",1,1,1,5,5,5};
	struct Box boxTwo = {2,"blue",2,2,2,4,4,4};
	printBox(&boxOne);
	printBox(&boxTwo);
	updateBoxes(&boxOne,&boxTwo);

	printf("\n--- --- --- --- --- --- ---\n");
	printf("\nBoxes with equal volume:\n");
	struct Box boxThree = {1,"orange",2,2,2,5,5,5};
	struct Box boxFour = {2,"purple",2,2,2,4,4,4};
	printBox(&boxThree);
	printBox(&boxFour);
	updateBoxes(&boxThree,&boxFour);
	
	printf("\n--- --- --- --- --- --- ---\n");
	printf("\nFirst Box with bigger volume:\n");
	struct Box boxFive = {1,"pink",4,4,4,5,5,5};
	struct Box boxSix = {2,"brown",2,2,2,4,4,4};
	printBox(&boxFive);
	printBox(&boxSix);
	updateBoxes(&boxFive,&boxSix);
	
	return 0;
}