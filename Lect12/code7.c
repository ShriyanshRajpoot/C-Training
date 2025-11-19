#include<stdio.h>
int main()
{
    int a[5]={1,2,3,5,6};
    int sum=0,total=0,i;
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
        
    }
    for(i=1;i<=a[size-1];i++)
    {
        total=total+i;    
    }
    int miss=total-sum;
    printf("Missing : %d",miss);
}