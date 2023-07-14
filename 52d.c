#include <stdio.h>
void prime(int num);
void primer(int num, int count);
int main()
{
    int num;
    printf("Please enter the number you want prime factors of\n");
    scanf("%d", &num);
    prime(num);
    printf("\n");
    primer(num, 2);
    return 0;
}
void prime(int num)
{
    int a;
    for (int i = 2; i < 10000; i++)
    {
        a = num % i;
        if (a == 0)
        {
            while (a == 0)
            {
                num = num / i;
                a = num % i;
            }

            printf(" %d ,", i);
        }
    }
}

void primer(int num, int count)
{
    if (num % count == 0)
    {
        printf("%d\n", count);
        primer(num / count, count);
    }
    else
    {
        primer(num, count + 1);
    }
}
