#include <stdio.h>

struct Person {
	char name[50];
	int age;
	float height;
};
void birthday(struct Person* ptr){
	ptr -> age ++;
	printf("%s is now %d\n",ptr->name,ptr->age);
}

int main(int argc, char const *argv[])
{
	struct Person someone = {"A",20,5.4};
	struct Person *ptr = &someone;
	printf("Name: %s, Age: %d, Height: %.2f\n",ptr->name,ptr->age,ptr->height);
	birthday(ptr);

	return 0;
}