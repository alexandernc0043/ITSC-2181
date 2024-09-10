#include <stdio.h>

int main(void){
  int hotestDay;
  int hotestTemp;
  printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");
  // Loops 10 times asking for temperature
  for(int i = 1; i <= 10; i++){
    printf("Enter a high temperature: ");
    int temp;
    scanf("%d", &temp);
// if hotter or equal sets hotest day&temp to i and temperature
    if(temp >= hotestTemp){
      hotestTemp = temp;
      hotestDay = i;
    }
  }
  printf("The highest recorded temperature in the 10-day period was : %d degrees\nLast recorded on: Day %d\n",hotestTemp,hotestDay);
  return 0;
}
