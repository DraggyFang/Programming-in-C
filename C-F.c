#include<stdio.h>
int main() {
    int celsius, farenheit;
    printf("Enter Temperature in Celsius:");
    scanf("%d", &celsius);
    farenheit = (celsius*9/5)+32; 
    printf("Temperature in Farenheit: %d\n", farenheit);
    return 0;
}