#include <stdio.h>
int main()
{
    int a, b, c, n = 0;
    int help[20];
    printf("The pythagorean triplets between 0 to 30 are\n");
    for (int i = 1; i <= 30; i++)
    {
        for (int n = 0; n <= 19; n++)
        {

            if (i == help[n])
            {
                goto start;
            }
        }

        for (int j = 1; j <= 30; j++)
        {
            for (int k = 1; k <= 30; k++)
            {
                a = i * i;
                b = j * j;
                c = k * k;
                if (c == a + b)
                {
                    printf("%d , %d and %d is a pythagorean triplet as\n ", i, j, k);
                    printf("%d X %d + %d X %d = %d X %d\n\n ", i, i, j, j, k, k);
                    help[n] = j;
                    n++;
                }
                else
                {
                    goto end;
                }
            end:
                continue;
            }
        }
    start:
        continue;
    }

    return 0;
}
