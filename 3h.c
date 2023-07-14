#include <stdio.h>
int main()
{
    int a, b, c = 0, d, i = 10;
    printf("Enter the number you want to find octal value of\n");
    scanf("%d", &a);
    d = a;
    b = d % 8;
    d = d / 8;
    c = c + b;
    while (d != 0)
    {
        b = d % 8;
        d = d / 8;
        c = i * b + c;
        i *= 10;
    }
    printf("Octal value of %d is %d", a, c);
    return 0;
}
