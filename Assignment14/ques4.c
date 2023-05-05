//Write a program to find greatest numbers stored in an array of size 10.Take array value from the user.
#include<stdio.h>

int main()
{
    int x[10],greatest,i;
    printf("Enter the array elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    greatest=x[i];
    for(i=0;i<10;i++)
    {
        if(greatest<x[i])
        greatest=x[i];
    }
    printf("\nGreatest number is %d.",greatest);
    return 0;
}