// Bits Magic

// Find even/odd through bitwise

#include<stdio.h>


int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n&1)
    {
        printf("Odd");

    }
    else
    {
        printf("Even");
    }
}