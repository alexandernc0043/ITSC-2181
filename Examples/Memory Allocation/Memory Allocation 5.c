#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int id;
	float score;
} Student;

int main(void)
{
	Student *s = malloc(sizeof(Student));
	if(s == NULL){
		fprintf(stderr, "%s\n");
		exit(1);
	}
	s->id = 1;
	s->score = 95.5;
	printf("ID: %d\tScore: %.2f\n", s->id,s->score);
	free(s);
	s = NULL;
	return 0;
}