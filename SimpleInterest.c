#include<stdio.h>
int main() {
    float p, r, t, i;

    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f", &t);

    i = (p * t * r) / 100;

    printf("The simple interest is: %f\n", i);
    return 0;
}