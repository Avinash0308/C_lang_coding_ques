#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Input the numbers between which you want to find Ramanujan number\n");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        c = 0;
        for (int j = 1; j * j * j < i; j++)
        {
            for (int k = j + 1; k * k * k + j * j * j <= i; k++)
            {
                if (k * k * k + j * j * j == i)
                {
                    c++;
                    j++;
                }
            }
        }
        if (c == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
