#include <stdio.h>
#include <math.h>
int main()
{
    float x, a, b, c,r;
    

    printf("This calculator will help you in knowing the natural logarithm of input number\n");
    printf("Please tell me the number you want to find natural logarithm of\n");
    scanf("%f", &x);
    a = (x - 1) / x;
    c=a;
    for (float i = 2; i <= 7; i++)
    {
        b = pow(a, i);
        r=b/2;
        c = c + r;
    }
    printf("Natural logarithm of %.2f is %.5f", x, c);
    return 0;
}
