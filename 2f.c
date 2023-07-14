#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the age of RAM\n");
    scanf("%d",&a);
    printf("Enter the age of SHYAM\n");
    scanf("%d",&b);
    printf("Enter the age of AJAY\n");
    scanf("%d",&c);
    if (a<b)
    {
        if (a<c)
        {
            printf("Ram is youngest among all\n");
        }
        goto end ;
    }
    if (b<a)
    {
        if (b<c)
        {
            printf("Shyam is youngest among all\n");
        }
        goto end ;
    }
    if (c<a)
    {
        if (c<b)
        {
            printf("Ajay is youngest among all\n");
        }
        goto end ;
    }
    
     end:
    return 0;
}

