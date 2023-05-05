//Write a program to find second smallest elements of an array of size 10. Take array values from the users.
 #include<stdio.h>

int main()
{
    int x[10],smallest1,smallest2,i;
    printf("Enter the array elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(x[i]<smallest1)
        {
            smallest2=smallest1;
            smallest1=x[i];
        }
        else if(smallest2>x[i])
         smallest2=x[i];

           }
    printf("\nSecond smallest number is %d.",smallest2);
    return 0;
}