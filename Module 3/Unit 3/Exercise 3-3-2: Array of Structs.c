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
	struct box boxes[100] = {
		{1,"green",5,5,5,1.2,3.4,5.6},
		{2,"blue",4,4,4,6.5,4.3,2.1},
	};
	return 0;
}