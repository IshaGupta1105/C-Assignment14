//Write a program to find smallest numbers stored in an array of size 10.Take array value from the user.
#include<stdio.h>

int main()
{
    int x[10],smallest,i;
    printf("Enter the array elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    smallest=x[i];
    for(i=0;i<10;i++)
    {
        if(smallest>x[i])
        smallest=x[i];
    }
    printf("\nSmallest number is %d.",smallest);
    return 0;
}