#include <stdio.h>
int main()
{

    for (int a = 0; a <= 6; a++)
    {
        for (char i = 65; i <= 71 - a; i++)
        {
            printf("%c ", i);
        }
        for (int k = 1; k <= a * 4 - 2; k++)
        {
            printf(" ");
        }

        for (char j = 70 - a + 1; j >= 65; j--)
        {
            if (j == 71)
            {
                printf("");
                goto z;
            }
            printf("%c ", j);
        z:
            continue;
        }

        printf("\n");
    }
    return 0;
}
