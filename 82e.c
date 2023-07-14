#include <stdio.h>
int main()
{
    int a;

    printf("Please tell me the number of element you want to input (must be a even value): ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("\nPlease type the value %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The given array is { ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n\n");

    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {
            int n = arr[i];
            
            for (int j = i; j < a; j++)
            {
                if (arr[j]%2==1)
                {
                    arr[i]=arr[j];
                    arr[j]=n;
                    goto end;
                }
                
            }
            
            
        }
        if (arr[i] % 2 == 1)
        {
            int n = arr[i];
            
            for (int j = i; j < a; j++)
            {
                if (arr[j]%2==0)
                {
                    arr[i]=arr[j];
                    arr[j]=n;
                    goto end;
                }
                
            }
            
            
        }
        end:
        continue;
    }
    printf("The new array is : {");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n\n");

    return 0;
}
