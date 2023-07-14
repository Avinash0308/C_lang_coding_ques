#include <stdio.h>
int main()
{
    int a, b, c , d;
    printf("This program will show you all Armstrong numbers between 1 to 500 \n");
    for (int a = 1; a <= 500; a++)
    {
        d = a;
        c=0;
        while (d!=0)
        {

            b = d % 10;
            d = d / 10;
            c = c +( b * b * b);
        }
        if (a==c)
        {
            printf("%d\n", a);
        }
        
    }

    return 0;
}
