#include <stdio.h>
int main()
{
    int a, b, i = 1, c = 1;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    while (i <= b)
    {
        c *= a;
        i++;
    }
    printf("The value of %d raised to power %d is %d", a, b, c);
    return 0;
}
