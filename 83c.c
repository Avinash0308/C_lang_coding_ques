#include<stdio.h>
int main()
{
    int arr[4][4];
    printf("Please input all the elements of array\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j< 4; j++)
        {
            printf("Please input the value (%d,%d)\n",i+1,j+1 );
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("The given array is : \n{");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    printf(" }\n\n\n");
    printf("The transpose of given array is : \n{");
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            int n=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=n;
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    printf(" }\n\n\n");
    return 0;
}