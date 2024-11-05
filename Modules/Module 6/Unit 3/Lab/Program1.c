#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int x = 60;
	int i = 0;
	while(i != x){
		i += 5;
		x -= 1;
	}
	if(i != 0) exit(42);
	exit(0);
}