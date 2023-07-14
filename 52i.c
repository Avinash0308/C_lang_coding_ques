#include <stdio.h>
void new (int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the values a , b & c respectively\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The value of a is : %d\n", a);
    printf("The value of b is : %d\n", b);
    printf("The value of c is : %d\n", c);
    new (a, b, c);
    return 0;
}
void new (int a, int b, int c)
{
    int f;
    f=a;
    a=c;
    c=b;
    b=f;
    printf("The new value of a is : %d\n",a);
    printf("The new value of b is : %d\n",b);
    printf("The new value of c is : %d\n",c);
}