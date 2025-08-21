#include<stdio.h>
int main() {
    double principal, rate, time, compoundInterest;
    printf("Enter principal amount: "); 
    scanf("%lf", &principal);
    printf("Enter rate of interest: "); 
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%lf", &time);
    compoundInterest = principal * (1 + rate / 100) * time;
    printf("Compound Interest: %.2lf\n", compoundInterest);
    return 0;
}