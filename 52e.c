#include <stdio.h>
int fib(int i);
int main()
{
    printf("The first 25 numbers of fibonacco series are\n");
    for (int i = 1; i < 26; i++)
    {
        printf("%d\n", fib(i));
    }

    return 0;
}
int fib(int i)
{
    if (i == 1 || i == 2)
    {
        return 1;
    }
    else
    {
        return fib(i - 1) + fib(i - 2);
    }
}