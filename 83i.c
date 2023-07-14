#include<stdio.h>
int main()
{
    int arr[6][6];
    int srr[6][6];
    printf("Enter all the elements of first 6x6 matrix : \n\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter the element (%d , %d) : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
            
        }
        
    }
    printf("\n\nNow enter all the element of second 6x6 matrix : \n\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter the element (%d , %d) : ",i+1,j+1);
            scanf("%d",&srr[i][j]);
            
        }
        
    }

    printf("The first array is  : \n{\n ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("}\n\n");
    printf("The second array is  : \n{\n ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ",srr[i][j]);
        }
        printf("\n");
    }
    printf("}\n\n");
    printf("The array formed by submission of given 2 arrays is : \n\n");
    printf("{\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ",srr[i][j] + arr[i][j]);
        }
        printf("\n");
    }
    printf("}\n\n");
    return 0;
}