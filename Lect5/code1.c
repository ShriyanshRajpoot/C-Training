#include<stdio.h>
int main()
{
    int num,lastdig,sum=0;
    printf("Enter Number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        lastdig=num%10;
        num=num/10;
        sum=sum+lastdig;
    }
    printf("Sum of digits = %d",sum);

}