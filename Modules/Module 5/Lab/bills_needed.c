#include <stdio.h>

int twenty,ten,five,one;

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones){
	*twenties = dollar_amount / 20;
	*tens = (dollar_amount % 20) / 10;
	*fives = (dollar_amount % 10) / 5;
	*ones = (dollar_amount % 5) / 1;
	
}


int main(void)
{
	int money;
	printf("Enter dollar amount to pay: ");
	scanf("%d",&money);
	calc_bills(money, &twenty, &ten, &five, &one);
	printf("You need:\n");
	printf("\t$20 dollar bills: %d\n", twenty);
	printf("\t$10 dollar bills: %d\n", ten);
	printf("\t$5 dollar bills: %d\n", five);
	printf("\t$1 dollar bills: %d\n", one);
	return 0;
}