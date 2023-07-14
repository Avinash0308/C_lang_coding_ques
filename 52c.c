#include <stdio.h>
int sum(int a);
int main()
{
    int a,d=0;
    printf("Enter the five digit number\n");
    scanf("%d", &a);
    printf("the sum of digits by recursive  is %d\n", sum(a));
    for (int i = 0; i < 5; i++)
    {
       int c=a%10;
       d=d+c;
        a=a/10;
    }
    
    printf("the sum by non recursive method is %d\n",d);
    return 0;
}
int sum(int a)
{

    int c = a % 10;
    a = a / 10;
    while (c != 0)
    {
        return c + sum(a);
    }
}