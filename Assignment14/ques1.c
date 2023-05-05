//Write a program to calculate the sum of numbers stored in an array of size 10.Take array value from the user
#include<stdio.h>

int main()
{
    int x[10],i,sum=0;
    printf("Enter the array element:\n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&x[i]);
    }

    for(i=0;i<10;i++)
    {
        sum=sum+x[i];
        
    }
    printf("Sum of numbers is %d",sum);
    return 0;
}