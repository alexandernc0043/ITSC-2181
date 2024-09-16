#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Limits for customer struct
#define nameMax 20
#define phoneMax 16



//Customer Struct
struct customer {
	char firstName[nameMax];
	char middleName[nameMax];
	char lastName[nameMax];
	char phoneNumber[phoneMax];
	float balance;
};

//Customer Database
struct customer customers[20];

// Function to display a customer
void show_customer(struct customer cust){
	printf("\nCustomer: %s %s %s\n", cust.firstName, cust.middleName, cust.lastName);
	printf("Phone Number: %s, Balance: %.2f", cust.phoneNumber, cust.balance);
	printf("\n--------------\n");
}
// Function to display all customers
void show_database(struct customer cust_db[], int size){
	for(int i = 0; i <= size - 1; i++){
		printf("show customer\n");
		show_customer(cust_db[i]);
	}
}



// function to get customer information
void getCustInfo(int i){
	char input[20];
	printf("Enter first name: ");
	scanf("%s", input);
	if(strcmp(input,":x") == 0 || strcmp(input,":X") == 0){
		printf("Good bye!\n");
		exit(0);	
	} else if(strcmp(input,":s") == 0 || strcmp(input,":S") == 0){
		show_database(customers, i);
	} else {
		strcpy(customers[i].firstName, input);
		printf("Enter middle name: ");
		scanf("%s", customers[i].middleName);
		printf("Enter last name: ");
		scanf("%s", customers[i].lastName);
		printf("Enter phone number: (#-### ###-#####) ");
		scanf("%s", customers[i].phoneNumber);
		printf("Enter balance: ");
		scanf("%f", &customers[i].balance);
		
	}
}

int main(void) {
	int i = 0;
	while(i < 20){
		getCustInfo(i);
		i++;
	}
	return 0;
}