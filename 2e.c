#include<stdio.h>
int main()
{
    int a,r,s=0;
    printf("Enter the number you want find the inverse of \n");
    scanf("%d",&a);
    for (a;a>0;)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    printf("the number is %d\n",s);
    return 0;
}

