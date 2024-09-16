#include <stdio.h>

int main(void){
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
	struct box myBox = {3, "red", 3, 2, 5, 10.21, 20.62, 35.72};

	printf("Item: %d, Color: %s Postion: (%.2f, %.2f %.2f)\nHeight: %d, Width: %d, Depth: %d\n",myBox.itemnum,myBox.color,myBox.x,myBox.y,myBox.z,myBox.height,myBox.width,myBox.depth);
}