#include<stdio.h>
int main()
{
    int arr[5][5],a=0;
    printf("Please insert all the elements of an array here\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Please input the value (%d , %d)\n\n",i+1,j+1 );
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j]>a)
            {
                a=arr[i][j];
            }
            
        }
        
    }
    
    printf("The largest value in the given array is %d\n", a);
    return 0;
}