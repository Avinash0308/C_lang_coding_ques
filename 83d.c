#include <stdio.h>
int main()
{
    int arr[4][4]={{1,4,15,7},{8,10,2,11},{14,3,6,13},{12,9,5, }};
    for (int i = 0; i < 4; i++)
    {
            printf("_____________________\n");

        for (int  j = 0; j < 4; j++)
        {
            if (arr[i][j] <10)  
            {
                printf("|%d   ",arr[i][j]);
            }
            else
            {
                printf("|%d  ",arr[i][j]);
            }
        }
        printf("|\n");
        
    }
    printf("_____________________\n");
    
    return 0;
}
