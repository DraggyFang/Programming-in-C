#include<stdio.h>
int main() {
    int a,b;
    printf("Enter width:");
    scanf("%d", &a);
    printf("Enter length:");    
    scanf("%d", &b);
    printf("The area of the rectangle is: %d\n", a * b);   
    printf("The perimeter of the rectangle is: %d\n", 2*(a+b));
    return 0;
}