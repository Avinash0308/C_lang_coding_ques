#include <stdio.h>
int main()
{
    int a, b, c;
    printf("The values are\n");

    for (int i = 1; i < 4; i++)
    {
        b = i * 100;
        for (int j = 1; j < 4; j++)
        {
            if (j == i)
            {
                goto end;
            }
            else
            {
                c = (j * 10);
                for (int k = 1; k < 4; k++)
                {
                    if (k == i || k == j)
                    {
                        goto start;
                    }
                    else
                    {

                        a = b + c + k;
                        printf("%d\n", a);
                    }
                start:
                    continue;
                }
            }
        end:
            continue;
        }
    }

    return 0;
}
