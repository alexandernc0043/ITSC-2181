#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0;
    int i = 0;
    int x = 100; 
    int arr[100];
    while (i != x) {
        arr[i] = rand() % (100 + 1);
        i++;
    }
    i = 0;
    while (i != x) {
        sum += arr[i];
        i++;
    }
    int average = sum / x;
    printf("Average: %d\n", average);
    return 0;
}