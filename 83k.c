#include <stdio.h>
int main()
{
    int arr[5];
    printf("Please input all the elements of  an array : \n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Please enter the element %d of an array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The given array is :\n{\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n}\n\n");
    int n= arr[0], m= arr[1];
    for (int i = 0; i < 3; i++)
    {
        
        
        arr[i] = arr[i + 2];
        if (i == 2)
        {
            arr[3] = n;
            arr[4] = m;
        }
    }
    printf("The new array is :\n{\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n}\n\n");
    return 0;
}