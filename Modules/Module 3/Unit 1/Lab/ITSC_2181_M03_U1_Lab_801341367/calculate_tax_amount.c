#include <stdio.h>

int main(void){
  int income = 0;
  printf("Please enter your income: ");
  scanf("%d",&income);
  /*
    * Calculates Tax amount
    */
  float taxes;
  if(income >= 190150){
    taxes = income * .35;
  } else if(income >= 91150){
    taxes = income * .30;
  } else if(income >= 37650){
    taxes = income * .27;
  } else if(income >= 9275){
    taxes = income * .17;
  } else {
    taxes = income * .12;
  }
  printf("Tax due = $%.2f\n",taxes);
  /*
    * Determines amount of tax credit
    */
  printf("Enter the number of dependents (0 for none): ");
  int dependents;
  scanf("%d",&dependents);
  int taxCredit = dependents * 450;
  /*
  * if larger then 2250 set it to 2250
  */
  if(taxCredit > 2250){
    taxCredit = 2250;
  }
  /*
    * Final print messages
    */
  printf("Tax credit = $%d\n",taxCredit);
  printf("Adjusted Tax = $%.2f\n", taxes - taxCredit);
  return 0;
}
