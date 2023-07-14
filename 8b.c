#include <stdio.h>
int main()
{
    int arr[100];
    int i = 0;
    printf("Please input all the elements of an array\n");
    printf("Type 10101 if all the elements of an array is inputed\n");
    while (1)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 10101)
        {
            break;
        }
        i++;
    }
    printf("Inputed array is { ");
    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("}\n");

    for (int j = 0; j < i/2; j++)
    {
        if (arr[j] == arr[i - 1 - j])
        {
            printf("The element %d and %d of an array  is matching and have the value %d\n", j + 1, i - j, arr[j]);
        }
        else
        {
            printf("The element %d and %d of an array  is not matching \n",j + 1, i - j);
        }

    }

    return 0;
}