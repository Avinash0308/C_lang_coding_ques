#include <stdio.h>
int main()
{
    printf("\n\nI am going to show you SIEVE OF ERATOSTHENES method : \nThis method is used to find prime numbers between the given set of numbers.\n\n");
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    printf("The given array is :\n\n{");
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n\n");
    for (int i = 2; i < 11; i++)
    {
        for (int j = 2; j < 100; j++)
        {
            if (arr[j] != i)
            {
                if (arr[j] % i == 0)
                {
                    arr[j] = 0;
                }
            }
        }
    }
    printf("All the prime numbers between 1 to 100 are \n\n : ");
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}