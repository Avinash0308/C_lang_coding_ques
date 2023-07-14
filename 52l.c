#include<stdio.h>
int div(int a, int b);
int main()
{
    int a,b;
    printf("Please enter the two numbers you want to find greatest common divisor of\n");
    scanf("%d %d",&a,&b);
    printf("The greatest common divisor of %d and %d is %d\n",a,b,div(a,b));
    return 0;
}
int div(int a, int b)
{
    int c,g;
    if (b>a)
    {
        c=b/a;
        g=b-c*a;
        if (g==0)
        {
            return a;
        }
        else
        {
            return div(a,g);
        }
    }
    if (a>b)
    {
        return div(b,a);
    }
    
}