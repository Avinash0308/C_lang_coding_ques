#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("Hello sir ! i am your personal virtual assistant avinash agrawal\n");
    printf("I will help you througout for knowing whether you have a profit or loss\n");
    printf("Please tell me the amount in which you have selled the product \n");
    scanf("%f",&a);
    printf("Also, tell me the cost price of the product\n");
    scanf("%f",&b);
    c=(a/b)*100;
    if (c<100)
    {
        printf("You have to suffer the loss of %f percent\n",(100-c));
    }
    else
    {
        printf("You had made a profit of %f percent\n",(c-100));
    }
    
    
    return 0;
}
