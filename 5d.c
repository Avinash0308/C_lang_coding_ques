#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter the year you want to know whether it is leap or not\n");
    scanf("%d",&a);
    c=a%4;
    if (c==0)
    {
        printf("%d is a leap year\n",a);
    }
    else
    {
        printf("%d is not a leap year \nThe next leap year will occur in year %d",a,a-c+4);
    }
    
    return 0;
}