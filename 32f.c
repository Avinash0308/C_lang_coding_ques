#include <stdio.h>
int main()
{
    int count = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int a = 1; a <= 4 - i; a++)
        {
            printf("  ");
        }
        for (int b = 1; b <= i; b++)
        {
            printf("%d    ", count);
            count += 1;
        }
        printf("\n");
    }

    return 0;
}
