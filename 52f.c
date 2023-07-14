#include <stdio.h>
int were(int num);
int nore(int num);
int main()
{
    int num;
    printf("Enter the number you want binary form of\n");
    scanf("%d", &num);
    printf("Using non recursive approach : %d\n", nore(num));
    printf("Using recursive approach : %d\n", were(num));
    return 0;
}
int were(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num % 2 + 10 * were(num / 2);
    }
}
int nore(int num)
{
    int a, res = 0, pow = 1;
    while (num != 0)
    {

        a = num % 2;
        res = res + pow * a;
        pow = pow * 10;
        num = num / 2;
    }
    return res;
}
