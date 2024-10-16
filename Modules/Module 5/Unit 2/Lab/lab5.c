#include <stdio.h>
#include <stdlib.h>

int total_items = 0;
float total_cost = 0.00;

void pretty_print(char item[], int total, float cost){
	printf("Item: %s\tQuantity: %d\tItem Cost: $%.2f\tSubtotal: $%.2f\n",item,total,cost,total_cost);
}

float process_data(char string[]){
	char item[50];
	int total;
	float cost;
	sscanf(string, "%s %d %f", item, &total, &cost);
	total_items++;
	total_cost += cost;
	pretty_print(item,total,cost);
	return 0.0;
}

int main(int argc, char *argv[])
{
	
	// if no file was provided
	if(argc < 2){
		printf("No file provided!\n");
		exit(1);
	}
	// open file passed by cmd line argument
	FILE* file;
	file = fopen(argv[1],"r");
	if(file == NULL){
		printf("Unable to open the input file.\n");
		exit(1);
	}

	char line[100];
	while(fgets(line, 100, file)){
		process_data(line);
	}
	printf("-----------------------------------------------------\n");
	printf("Total Items: %d\t\t\tTotal Cost: %.2f\n",total_items,total_cost);
	fclose(file);
	return 0;
}