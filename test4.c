#include <stdio.h>

int main(){
    int a,b,q,r;
    printf("enter the dividend : ");
    scanf("%d",&a);
    printf("enter the divisor : ");
    scanf("%d",&b);
    q = a/b;
    r = a-b*q;
    printf("Remainder when %d is divided by %d is : %d",a,b,r); 

     return 0;
}