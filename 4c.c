#include <stdio.h>
int factorial(int x);
void prime(int a);
void oddeven(int b);
int main()
{
    int choose, num;
    while (1)
    {

        printf("Hello there i will help you in determining some of the problems in your mind\n");
        printf("Please tell me the operation you want to perform\n");
        printf("1.Factorial of number\n");
        printf("2.Prime or not\n");
        printf("3.Odd or Even\n");
        printf("4.Exit\n");
        scanf("%d", &choose);
        if (choose == 4)
        {
            goto end;
        }

        printf("Please enter the number (Number must be between 1 to 100)\n");
        scanf("%d", &num);

        switch (choose)
        {
        case 1:
            printf("Factorial of %d is %d\n", num, factorial(num));
            break;
        case 2:
            prime(num);
            break;
        case 3:
            oddeven(num);
            break;

        default:
            printf("May God give you power to learn numbers\n");
            break;
        }
    }
end:
    return 0;
}
int factorial(int x)

{
    int c = 1;
    for (int i = 1; i <= x; i++)
    {
        c = c * i;
    }
    return c;
}
void prime(int a)
{
    int s;
    for (int j = 2; j < 7; j++)
    {
        if (j != a)
        {
            s = a % j;
            if (s == 0)
            {
                printf("It is not a prime number as it is divisible by %d\n", j);
                break;
            }
        }
    }
    if (s != 0)
    {

        printf("It is prime number\n");
    }
}
void oddeven(int b)
{
    b = b % 2;
    if (b == 0)
    {
        printf("It is a even number\n");
    }
    else
    {
        printf("It is a odd number\n");
    }
}