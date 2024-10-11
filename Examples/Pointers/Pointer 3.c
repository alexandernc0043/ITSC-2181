#include <stdlib.h>
#include <stdio.h>

struct Person {
	char name[50];
	int age;
	float height;
};

void printPerson(const struct Person *pointer){
	printf("Name: %s\tAge: %d\tHeight: %.2f\n", pointer -> name, pointer -> age, pointer -> height);	
}
void birthday(struct Person *pointer){
	pointer -> age++;
	printf("%s is now %d\n",pointer -> name , pointer -> age);
}


int main(int argc, char const *argv[])
{
	struct Person someone = {"Alice", 28, 5.4};
	struct Person *ptr = &someone;
	printf("Using ptr\t");
	printPerson(ptr);
	printf("Using &someone\t");
	printPerson(&someone);
	birthday(ptr);
	return 0;
}