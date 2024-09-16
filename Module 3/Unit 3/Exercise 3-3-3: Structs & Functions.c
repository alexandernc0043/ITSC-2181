#include <stdio.h>
#include <string.h>

struct box {
	int itemnum;
	char color[20];
	int height;
	int width;
	int depth;
	float x;
	float y;
	float z;
};

float volume(struct box box){
	return box.height * box.width * box.depth;
}
/*
The function also modifies the position and color of the biggest box. 
The returned box will have a position of (0, 0, 0) 
and the color will be set to "green".
*/
/* 
If both boxes have the same volume, 
make the modifications and return the second box.
*/
struct box compareStruct(struct box one, struct box two){
	float v1 = volume(one);
	float v2 = volume(two);
	if(v1 < v2 || v1 == v2){
		strcpy(two.color, "green");
		two.x = 0;
		two.y = 0;
		two.z = 0;
		return two;
	} else {
		strcpy(one.color, "green");
		one.x = 0;
		one.y = 0;
		one.z = 0;
		return one;
	}
}

int main(void){
	struct box boxOne = {1, "red", 3,3,3, 3.1,3.1,3.1};
	struct box boxTwo = {2, "blue" ,2,2,2, 2.1,2.1,2.1};
	struct box compare = compareStruct(boxOne,boxTwo);
	printf("Itemnum #%d\tColor: %s\n", compare.itemnum, compare.color);
	boxTwo.height = 3;
	boxTwo.width = 3;
	boxTwo.depth = 3;
	compare = compareStruct(boxOne,boxTwo);
	printf("Itemnum #%d\tColor: %s\n", compare.itemnum, compare.color);
	return 0;
}