#include <stdio.h>

struct Person {
	char name[50];
	int age;
	float height;
};

void printPerson(const struct Person *p){
	printf("Name: %s\nAge: %d\nHeight: %.2f\n", p->name,p->age,p->height);
}

void birthday(struct Person *p){
	p->age++;
	printf("New age for %s is %d\n", p->name,p->age);
}

int main(void){
	struct Person person = {"Alex",19,5.7};
	printPerson(&person);
	birthday(&person);

	return 0;
}