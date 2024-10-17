#include <stdio.h>
#include <stdlib.h>

int total_items = 0;
float total_cost = 0.00;

char item_name[50];
int item_quantity;
float item_cost;

void pretty_print(char item[], int total, float cost){
	printf("Item: %s\tQuantity: %d\tItem Cost: $%.2f\tSubtotal: $%.2f\n",
		item,
		total,
		cost,
		(total*cost)
	);
}

float process_data(char string[]){
	sscanf(string, "%s %d %f", item_name, &item_quantity, &item_cost);
	total_items++;
	return (float) item_quantity * item_cost;
}

int main(int argc, char *argv[])
{
	// open file passed by cmd line argument
	FILE* file;
	file = fopen(argv[1],"r");
	if(file == NULL){
		printf("Unable to open the input file.\n");
		exit(1);
	}

	char line[100];
	while(fgets(line, 100, file)){
		total_cost += process_data(line);
		pretty_print(item_name,item_quantity,item_cost);
	
	}
	printf("-----------------------------------------------------\n");
	printf("Total Items: %d\t\t\tTotal Cost: %.2f\n",total_items,total_cost);
	fclose(file);
	return 0;
}