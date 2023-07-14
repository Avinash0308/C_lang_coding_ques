#include<stdio.h>
#include<math.h>
float value(float num, float i);
float power(float num, float i);
float fac (float i);
float main()
{
    float num;
    printf("Please enter the number\n");
    scanf("%f",&num);
    printf("The value is %.5f\n",value(num,1));
    return 0;
}
float value(float num, float i)
{
    return power(num,i)/fac(i) - power(num,i+2)/fac(i+2) ;
}
float fac(float i)
{
    if (i==1 || i==0)
    {
        return 1;
    }
    else
    {
        return (i*fac(i-1));
    }
}
float power(float num, float i)
{
    return pow(num,i);
}