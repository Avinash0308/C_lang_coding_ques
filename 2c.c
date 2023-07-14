#include<stdio.h>
int main()
{
    int a,b;
    printf("If you are willing to know that year is leap or not \nPlease enter it here\n ");
    scanf("%d",&a);
    printf("(Taking 2001 to be reference leap year)\n");
    b=a%4;
    if (b==1)
    {
        printf("%d is a leap year\n",a);
    }
    else
    {
        printf("%d is not a leap year\n",a);
    }
    
    return 0;
}

