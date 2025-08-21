#include<stdio.h>
int main() {
    int a=5,b=10;
    printf("Pre-swap, a=%d,b=%d\n",a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Post-swap, a=%d,b=%d\n",a, b);
    return 0;
}