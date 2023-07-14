#include <stdio.h>
void factors(int x);
int main()
{
    int num;
    printf("Enter the number you want to find prime factors of\n");
    scanf("%d", &num);
    printf("Prime factors of %d are \n", num);
    factors(num);

    return 0;
}
void factors(int x)
{
    for (int i = 2; i < 10000; i++)
    {
    start:
        if (x == 1)
        {
            printf("1");
            goto end;
        }

        int c;
        c = x % i;
        if (c == 0)
        {
            printf("%d X ", i);
            x = x / i;
            goto start;
        }
    }
    end:
    return;
}