#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number you want to find the absolute value of \n");
    scanf("%d",&a);
    if (a<=0)
    {
        printf("Absolute value of %d is %d\n",a,(-1)*a);
    }
    else
    {
        printf("Absolute value of %d is %d itself",a,a);
    }
    
    return 0;
}

