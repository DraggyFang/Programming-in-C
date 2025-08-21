#include<stdio.h>
int main() {
    int a=5,b=10,c;
    printf("Pre-swap, a=%d,b=%d\n",a, b);
    c=a;
    a=b;
    b=c;
    printf("Post-swap, a=%d,b=%d\n",a, b);
    return 0;
}   