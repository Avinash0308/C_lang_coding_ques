#include <stdio.h>
int rm(int x);
int rd(int x);
int rc(int x);
int rl(int x);
int rx(int x);
int rv(int x);
int ri(int x);
int main()
{
    int num, c;
    printf("Please enter the year you want to find the roman form of\n");
    scanf("%d", &num);
    printf("The roman form of %d is\n", num);

    c = num / 1000;
    rm(c);
    num = num % 1000;

    c = num / 500;
    rd(c);
    num = num % 500;

    c = num / 100;
    rc(c);
    num = num % 100 ;

    c = num / 50;
    rl(c);
    num = num % 50;

    c = num / 10;
    rx(c);
    num = num % 10;

    c = num / 5;
    rv(c);
    num = num % 5;

    c = num / 1;
    ri(c);
    

    return 0;
}
int rm(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("M");
    }
}
int rd(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("D");
    }
}
int rc(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("C");
    }
}
int rl(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("L");
    }
}
int rx(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("X");
    }
}
int rv(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("V");
    }
}
int ri(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("I");
    }
}