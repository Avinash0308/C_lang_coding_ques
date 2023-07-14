#include <stdio.h>
int main()
{
    int arr[][3] = {{1, 2, 3}, {3, 5, 4}, {2, 1, 4}};
    int srr[][3] = {{12, 23, 35}, {3, 5, 4}, {2, 4, 1}};
    int krr[3][3], r=0;
    printf("The first array is  : \n{\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("}\n\n");
    printf("The second array is  : \n{\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",srr[i][j]);
        }
        printf("\n");
    }
    printf("}\n\n");
    for (int k = 0; k < 3; k++)
    {
        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           r=r+arr[k][j]*srr[j][i]; 
        }
        krr[k][i]=r;
        r=0;
    }
    }
    
    printf("The array formed by multiplication of given two arrays is  : \n{\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",krr[i][j]);
        }
        printf("\n");
    }
    printf("}\n\n");
    
    return 0;
}