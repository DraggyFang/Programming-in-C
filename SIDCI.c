#include<stdio.h>
#include<math.h>

int main() {
    float p, r, t, si, ci;

    printf("Enter principal: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);

    si = (p*r*t)/100;
    ci = p*pow(1 + r / 100, t) -p;

    printf("SI: %.2f\nCI: %.2f\nDifference: %.2f\n", si, ci, ci - si);
    return 0;
}
