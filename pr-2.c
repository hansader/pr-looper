#include<stdio.h>

void main()
{
    int n,count=0;
    printf("enter the number:");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;
    }
    printf("Total number of digits are:%d",count);
}