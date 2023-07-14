#include <stdio.h>
int main()
{
    int j = 0;
    int arr[25];
    printf("Please enter all 25 numbers one by one you want analysis of \n\n");
    for (int i = 0; i < 25; i++)
    {
        printf("Please enter the value_%d : ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    printf("The given set of numbers is { ");
    for (int i = 0; i < 25; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n\n");

    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == 0)
        {
            j++;
        }
    }
    printf("Numbers of zero in the given set of numbers is : %d\n\n", j);
    j = 0;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] % 2 == 0)
        {
            j++;
        }
    }
    printf("Numbers of even numbers in the given set of numbers is : %d\n\n", j);
    j = 0;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] % 2 == 1 || arr[i] % 2 == -1)
        {
            j++;
        }
    }
    printf("Numbers of odd numbers in the given set of numbers is : %d\n\n", j);
    j = 0;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            j++;
        }
    }
    printf("Numbers of positive numbers in the given set of numbers is : %d\n\n", j);
    j = 0;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] < 0)
        {
            j++;
        }
    }
    printf("Numbers of negative numbers in the given set of numbers is : %d\n\n", j);
    return 0;
}