#include <stdio.h>
#include <math.h>

int sum(int a, int b, int c, int d, int e);
float avg(int a, int b, int c, int d, int e);
float sd(int a, int b, int c, int d, int e);
int main()
{
    int a, b, c, d, e;
    printf("Enter the values of 5 numbers one by one\n");

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("\nThe sum of above numbers is %d\n", sum(a, b, c, d, e));
    printf("And the average is %f\n", avg(a, b, c, d, e));
    printf("The standard deviation is %f\n", sd(a, b, c, d, e));

    return 0;
}
int sum(int a, int b, int c, int d, int e)
{
    c = a + b + c + d + e;
    return c;
}
float avg(int a, int b, int c, int d, int e)
{
    float x;
    x = (float)sum(a, b, c, d, e) / 5;

    return x;
}
float sd(int a, int b, int c, int d, int e)
{
    float x;
    x = pow((a - avg(a, b, c, d, e)), 2) + pow((b - avg(a, b, c, d, e)), 2) + pow((c - avg(a, b, c, d, e)), 2) + pow((d - avg(a, b, c, d, e)), 2) + pow((e - avg(a, b, c, d, e)), 2);
    x = x / 5;
    x = pow(x,0.5);
    return x;
}