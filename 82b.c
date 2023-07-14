#include <stdio.h>
int main()
{
    int arr[] = {44, 33, 55, 22, 11};
    printf("\n\nThe given array is : {44,33,55,22,11}");
    int a;
    
    printf("\n\n\n\nBy Bubble sort method\n\n");
    for (int q = 0; q < 4; q++)
    {
        for (int w = 0; w < 4 - q; w++)
        {
            if (arr[w] > arr[w + 1])
            {
                if (arr[w] > arr[w + 1])
                {
                    a = arr[w];
                    arr[w] = arr[w + 1];
                    arr[w + 1] = a;
                    printf("Now the array is : {");
                    for (int k = 0; k < 5; k++)
                    {
                        printf(" %d", arr[k]);
                    }
                    printf("}\n\n");
                }
            }
        }
    }
    printf("\n\n\n\nBy Insertion sort method\n\n");
    int b;
    for (int i = 0; i < 4; i++)
    {
        if (arr[0] > arr[i + 1])
        {
            a = arr[0];
            arr[0] = arr[i + 1];
            arr[i + 1] = a;
            for (int l = 1; l < i + 2; l++)
            {
                b = arr[l];
                arr[l] = a;
                a = b;
            }
        }
        printf("Now the array is : {");
        for (int k = 0; k < 5; k++)
        {
            printf(" %d", arr[k]);
        }
        printf("}\n\n");
    }


    printf("\n\n\n\nBy Selection sort method\n\n");
    for (int c = 0; c < 4; c++)
    {
        for (int r = c + 1; r < 5; r++)
        {
            if (arr[c] > arr[r])
            {
                a = arr[c];
                arr[c] = arr[r];
                arr[r] = a;
                printf("Now the array is : {");
                for (int k = 0; k < 5; k++)
                {
                    printf(" %d", arr[k]);
                }
                printf("}\n\n");
            }
        }
    }

    return 0;
}