#include <stdio.h>
int main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        for (int a = 1; a <= 5 - i; a++)
        {
            printf("  ");
        }
        for (int b = 1; b <= i; b++)
        {
            if (b==1 || b==i)
            {
                printf("1    ");
                goto again;
            }
            
            if (b==3 && i==5)
            {
                printf("6    ");
                goto again;
            }
            
            printf("%d    ", i-1);
            again :
            continue;
        }
        printf("\n");
    }

    return 0;
}
