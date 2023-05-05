//Write a program to calculate the sum of all even number and sum of all odd numbers,which are stored in an array of size 10.Take array value from user

#include<stdio.h>

int main()
{
    int x[10],i;
    int even_sum=0,odd_sum=0;
    printf("Enter the array element:\n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&x[i]);
    }

    for(i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            even_sum = even_sum+x[i];
        }
        else
        {
            odd_sum = odd_sum+x[i];
        }
        
    }
    printf("\nSum of even numbers is %d\n",even_sum);
    printf("Sum of odd numbers is %d\n",odd_sum);
    return 0;
}