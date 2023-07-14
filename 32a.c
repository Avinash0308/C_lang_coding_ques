#include <stdio.h>
int main()
{
    int c;
    printf("This program will show you all the prime numbers between 1 to 300\n");
    for (int j = 1; j <= 300; j++)
    {
        for (int i = 2; i < 18; i++)
        {
            if (j != i)
            {
                c = j % i;
                if (c == 0)
                {
                    break;
                }
            }
            continue;
        }
        if (c != 0)
        {
            printf("%d is a prime number\n", j);
        }

        continue;
    }

    return 0;
}
