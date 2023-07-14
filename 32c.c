#include <stdio.h>
int main()
{
    float a = 1, i;
    float d = 0;
    printf("Sum of seven numbers of given series is\n");

    for (float i = 1; i <= 7; i++)
    {

        a = a * i;

        d = d + (i / a);
    }

    printf("Sum of first seven numbers of the series is %f\n", d);
    return 0;
}
