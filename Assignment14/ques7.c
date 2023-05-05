//Write a program to find second largest elements of an array of size 10. Take array values from the users.
 #include<stdio.h>

int main()
{
    int x[10],max1=-1,max2=-2,i;
    printf("Enter the array elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(x[i]>max1)
        {
            max2=max1;
            max1=x[i];
        }
        else if(max2<x[i])
         max2=x[i];

           }
    printf("\nSecond largest number is %d.",max2);
    return 0;
}