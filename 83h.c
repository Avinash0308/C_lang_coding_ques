#include<stdio.h>
void aid()
{
    printf("Given function is not symmetric\n");
}
int main()
{
    int a;
    printf("Enter the number of rows in square matrix : ");
    scanf("%d",&a);
    int arr[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter the element (%d , %d) : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
            
        }
        
    }
    printf("The array is  : \n{\n ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("}\n\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[i][j]!= arr[j][i])
            {
                aid();
                goto end;
            }
            else
            {
                continue;
            }
            
        }
        
    }
    printf("The given matrix is symmetric\n");
    end: 
    return 0;
}