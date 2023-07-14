#include <stdio.h>
#include <math.h>
int main()
{
    float time, pa, q, r, a, d, e, t=0;
    double s;
    printf("This calculator will help you in finding the amount you will collect from the bank per year as per your deposit\n");
    printf("Please tell me the principal amount and time for which you want to invest your money \n");
    printf("Pleae type the amount here\n");
    scanf("%f", &pa);
    printf("now tell me the time period (in years)\n");
    scanf("%f", &time);
    printf("also tell me the interest rate bank is providing you (in percentage)\n");
    scanf("%f", &r);
    printf("One more thing , how many times in the year money will be compounded?\n");
    scanf("%f", &q);
    d = r / (q * 100);
    printf("\tPA\t\t\tRATE\t\t\tNO. OF TIMES\t\tTIME PERIOD\t\tTOTAL AMOUNT\n");
    printf("\t__________________________________________________________________________________________________________\n");
    for (float i = 0; i <= time; i++)

    {
        
        e = t * q;
        s = pow((1 + d), e);
        a = pa * s;
        printf("\t%0.2f\t\t%0.2f\t\t\t%0.2f\t\t\t%0.2f\t\t\t%0.2f\n", pa, r, q, t, a);
        printf("\t__________________________________________________________________________________________________________\n");
        t++;
        pa = a;
    }

    return 0;
}
