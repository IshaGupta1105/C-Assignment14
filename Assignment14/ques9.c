//wap to read n number of values in an array and display it in reverse order.Take array values from the users.
#include<stdio.h>
int main()
{
    int arr[10], i;
    printf("Enter any 10 elements:\n ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements in reverse order:\n");
    for(i=9; i>=0; i--)
    {
            printf("%d ", arr[i]);
    }
    return 0;
}
