#include <stdio.h>
int main()
{
    float a,b;
    float amt,month,rate;
    printf("Hello buddy , I am your personal loan assistant \nI will tell you about monthly installments of your loan\n");
    printf("Please tell me the amount of loan you have taken from bank\n");
    scanf("%f",&amt);
    printf("Now tell the number of months for which you are seeking loan\n");
    scanf("%f",&month);
    printf("One last thing, at what rate of interest you are taking the loan?\n");
    scanf("%f",&rate);
    a=amt/month;
    for (int i = 1; i <= month; i++)
    {
        b=(amt*rate)/100;
        amt=amt-a;
        printf("At end of month %d you will have to pay %f to your bank\n",i,a+b);
    }
    
    return 0;
}
