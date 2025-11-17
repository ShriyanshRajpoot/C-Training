#include<stdio.h>
int main()
{
    int num,a,b,next,i;
    printf("\nEnter : ");
    scanf("%d",&num);
    a=0;
    b=1;
    for(i=1;i<=num;i++)
    {
        printf("\t%d",a);
       next=a+b;
       a=b;
       b=next;
    }
    
}